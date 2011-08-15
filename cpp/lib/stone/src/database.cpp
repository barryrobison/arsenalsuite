
/*
 *
 * Copyright 2003 Blur Studio Inc.
 *
 * This file is part of libstone.
 *
 * libstone is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * libstone is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libstone; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/*
 * $Id$
 */

#include <QSqlDatabase>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qfile.h>
#include <qdatetime.h>
#include <qtextstream.h>
#include <qtimer.h>

#include "blurqt.h"
#include "connection.h"
#include "database.h"
#include "iniconfig.h"
#include "table.h"
#include "recordimp.h"
#include "updatemanager.h"
#include "undomanager.h"
#include "schema.h"

namespace Stone {

Database::Database( Schema * schema, Connection * conn )
: mSchema( schema )
, mEchoMode( 0 )
, mInsideTransactionCount( 0 )
, mReallyInsideTransaction( false )
, mRolledBack( false )
, mUndoEnabled( false )
, mTransactionTimer( 0 )
, mQueueRecordSignals( false )
, mRefCount( 0 )
{
	setConnection( conn );
	mTransactionTimer = new QTimer( this );
	connect( mTransactionTimer, SIGNAL( timeout() ), SLOT( transactionTimeout() ) );

	foreach( TableSchema * ts, schema->tables() )
		mSchemaToTable.insert( ts, new Table( this, ts ) );

	foreach( Table * t, tables() )
		t->setup();

	IniConfig & cfg = config();
	cfg.pushSection( "Database" );
	QString echoMode = cfg.readString( "EchoMode" );
	cfg.popSection();
	setEchoMode(
		  (echoMode.contains("EchoSelect") ? EchoSelect : 0)
		| (echoMode.contains("EchoUpdate") ? EchoUpdate : 0)
		| (echoMode.contains("EchoInsert") ? EchoInsert : 0)
		| (echoMode.contains("EchoDelete") ? EchoDelete : 0) );
}

Database::~Database()
{
	foreach( Table * t, tables() )
		if( !t->parent() )
			delete t;
}

Connection * Database::connection() const
{
	return mConnections.localData();
}

void Database::setConnection( Connection * c )
{
	mConnections.setLocalData( c );
}

TableList Database::tables()
{
	return mSchemaToTable.values();
}

bool Database::undoEnabled() const
{
	return mUndoEnabled;
}

void Database::setUndoEnabled( bool ue )
{
	mUndoEnabled = ue;
}

void Database::recordsAdded( const RecordList & added, bool local )
{
	if( local && mUndoEnabled )
		UndoManager::instance()->addOperation( new RecordUndoOperation( added, RecordUndoOperation::INSERT ) );
	
	emit recordsAddedSignal( added );
	flushUpdateBuffer();
}

void Database::recordsRemoved( const RecordList & removed, bool local )
{
	if( local && mUndoEnabled )
		UndoManager::instance()->addOperation( new RecordUndoOperation( removed, RecordUndoOperation::DELETE ) );

	emit recordsRemovedSignal( removed );
	flushUpdateBuffer();
}

void Database::recordUpdated( const Record & current, const Record & old, bool local )
{
	if( local && mUndoEnabled ) {
		RecordList recs;
		recs += current;
		recs += old;
		UndoManager::instance()->addOperation( new RecordUndoOperation( recs, RecordUndoOperation::UPDATE ) );
	}
	emit recordUpdatedSignal( current, old );
	if( local )
		flushUpdateBuffer();
}

void Database::recordsIncoming( const RecordList & incoming, bool  )
{
	emit recordsIncomingSignal( incoming );
}

void Database::ref()
{ mRefCount++; }

void Database::deref()
{
	mRefCount--;
	if( mRefCount == 0 )
		delete this;
}

struct DbThreadStorage {
	~DbThreadStorage() {
	}
	QList<Database*> databases;
};
static QThreadStorage<DbThreadStorage*> mCurrentDatabase;

Database * Database::current( Schema * schema )
{
	DbThreadStorage * dbt = 0;
	if( !mCurrentDatabase.hasLocalData() )
		return 0;
	else
		dbt = mCurrentDatabase.localData();
	foreach( Database * d, dbt->databases )
		if( !schema || d->schema() == schema )
			return d;
	return 0;
}

QList<Database*> Database::databases()
{
	if( mCurrentDatabase.hasLocalData() )
		return mCurrentDatabase.localData()->databases;
	return QList<Database*>();
}

void Database::setCurrent( Database * db )
{
	if( !mCurrentDatabase.hasLocalData() )
		mCurrentDatabase.setLocalData( new DbThreadStorage );
	DbThreadStorage * dbt = mCurrentDatabase.localData();
	db->ref();
	if( dbt->databases.removeAll( db ) )
		db->deref();
	dbt->databases.push_front( db );
}

Table * Database::tableFromSchema( TableSchema * tableSchema ) const
{
	if( !tableSchema ) return 0;
	Table * table = mSchemaToTable.value(tableSchema);
	// If this tableSchema was added after initial Database contruction
	// then we have to create the table, as well as any missing parent
	// and children.  This should probably be handled more actively when
	// the new tableSchemas are added, but this will suffice for now.
	if( !table && tableSchema->schema() == mSchema ) {
		Database * this_db = const_cast<Database*>(this);
		table = new Table( this_db, tableSchema );
		this_db->mSchemaToTable.insert( tableSchema, table );
		if( tableSchema->parent() ) tableFromSchema( tableSchema->parent() );
		table->setup();
		foreach( TableSchema * child, tableSchema->children() )
			tableFromSchema( child );
	}
	return table;
}

Table * Database::tableByName( const QString & tableName ) const
{
	return tableFromSchema( mSchema->tableByName( tableName ) );
}

Table * Database::tableByClass( const QString & className ) const
{
	return tableFromSchema( mSchema->tableByClass( className ) );
}

uint Database::echoMode() const
{
	return mEchoMode;
}

void Database::setEchoMode( uint em )
{
	mEchoMode = em;
}

int Database::elapsedSqlTime( int action )
{
	int ret=0;
	foreach( Table * t, tables() )
		ret += t->elapsedSqlTime( action );
	return ret;
}

int Database::elapsedIndexTime( int action )
{
	int ret=0;
	foreach( Table * t, tables() )
		ret += t->elapsedIndexTime( action );
	return ret;
}

bool Database::ensureInsideTransaction()
{
//	LOG_3( "Database::ensureInsideTransaction: mInsideTransactionCount: " + QString::number( mInsideTransactionCount ) + " mReallyInsideTransaction: " + QString(mReallyInsideTransaction ? "true" : "false")
//		+ " mRolledBack: " + QString(mRolledBack ? "true" : "false"));
	if( mInsideTransactionCount > 0 && !mReallyInsideTransaction && !mRolledBack ) {
		mReallyInsideTransaction = true;
		connection()->beginTransaction();
		if( mEchoMode & (EchoInsert|EchoUpdate|EchoDelete) )
			LOG_3( "BEGIN;" );
		// Only allow a transaction to be open for 1 minute
		// TODO, make this configurable, with a global default
		// and a per-transaction override
		mTransactionTimer->start( 60 * 1000 );
	}
	return !mRolledBack;
}

void Database::flushUpdateBuffer()
{
	if( mInsideTransactionCount == 0 )
		UpdateManager::instance()->flushPending();
}

void Database::beginTransaction( const QString & title )
{
	mInsideTransactionCount++;
	if( mUndoEnabled ) {
		if( mInsideTransactionCount==1 )
			UndoManager::instance()->startBlock( title );
		else
			UndoManager::instance()->pushTitle( title );
	}
}

void Database::commitTransaction()
{
	if( mInsideTransactionCount==0 )
		return;

	mInsideTransactionCount--;
	
	if( mInsideTransactionCount==0 ){
		
		if( mReallyInsideTransaction ){
			mTransactionTimer->stop();
			if( mEchoMode & (EchoInsert|EchoUpdate|EchoDelete) )
				LOG_3( "COMMIT;" );
			mReallyInsideTransaction = false;
			connection()->commitTransaction();
		}

		if( mUndoEnabled )
			UndoManager::instance()->commitBlock();

		UpdateManager::instance()->flushPending();
		
		mRolledBack = false;
	} else if( mUndoEnabled )
		UndoManager::instance()->popTitle();
}

void Database::rollbackTransaction()
{
	if( mInsideTransactionCount==0 )
		return;

	mInsideTransactionCount--;
	mRolledBack = (mInsideTransactionCount>0);

	UpdateManager::instance()->clearPending();

	if( mReallyInsideTransaction ) {
		mTransactionTimer->stop();
		if( mEchoMode & (EchoInsert|EchoUpdate|EchoDelete) )
			LOG_3( "ROLLBACK;" );
		mReallyInsideTransaction = false;
		connection()->rollbackTransaction();
	}
	
	if( mUndoEnabled )
		UndoManager::instance()->rollbackBlock();
}

void Database::transactionTimeout()
{
	LOG_1( "Transaction has timed out: Rolling back transaction" );
	rollbackTransaction();
}

bool Database::insideTransaction()
{
	return mInsideTransactionCount>0;
}

static bool createVerifyHelper( Database * db, bool create, QString * output )
{
	bool success = true;
	QList<Table*> checked;
	foreach( Table * t, db->tables() )
	{
		QStack<Table*> ans;
		while( t->parent() ) {
			ans.push(t);
			t = t->parent();
		}
		while( t ) {
			if( !checked.contains(t) ) {
				QString tmp1, tmp2;
				if( create && !t->exists() ) {
					if( !t->createTable( &tmp1 ) )
						success = false;
				} else if( !t->verifyTable( true, &tmp2 ) )
					success = false;
				if( output )
					*output += tmp1 + tmp2;
			}
			checked += t;
			t = ans.size() ? ans.pop() : 0;
		}
	}
	return success;
}

bool Database::verifyTables( QString * output )
{
	return createVerifyHelper( this, false, output );
}

bool Database::createTables( QString * output )
{
	return createVerifyHelper( this, true, output );
}

void Database::addDeleteAction( Field * f )
{
	Table * t = tableFromSchema(f->foreignKeyTable());
	if( t )
		t->addDeleteAction( f );
	else
		mPendingDeleteActions += f;
}

void Database::removeDeleteAction( Field * f )
{
	Table * t = tableFromSchema( f->foreignKeyTable() );
	if( t )
		t->removeDeleteAction( f );
}

void Database::printStats()
{
	foreach( Table * t, tables() )
		t->printStats();
}
bool Database::queueRecordSignals() const
{
	return mQueueRecordSignals;
}

bool Database::setQueueRecordSignals( bool qrc )
{
	bool ret = mQueueRecordSignals;
	mQueueRecordSignals = qrc;
	return ret;
}

bool Database::pushQueueRecordSignals( bool qrs )
{
	bool ret = mQueueRecordSignals;
	mQueueRecordSignalsStack.push( mQueueRecordSignals );
	mQueueRecordSignals = qrs;
	return ret;
}

bool Database::popQueueRecordSignals()
{
	if( mQueueRecordSignalsStack.size() )
		mQueueRecordSignals = mQueueRecordSignalsStack.pop();
	return mQueueRecordSignals;
}

} // namespace Stone
