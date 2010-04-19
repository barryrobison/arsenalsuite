

#ifndef CREATE_DATABASE_DIALOG_H
#define CREATE_DATABASE_DIALOG_H

#include <qdialog.h>

#include "ui_createdatabasedialogui.h"

namespace Stone {
class Database;
class Schema;
}
using namespace Stone;

class CreateDatabaseDialog : public QDialog
{
Q_OBJECT
public:
	CreateDatabaseDialog( Schema * schema, QWidget * parent=0 );

public slots:
	void editConnection();
	void verifyDatabase();
	void createDatabase();
	void updateConnectionLabel();

protected:
	Schema * mSchema;
	Database * mDatabase;
	Ui::CreateDatabaseDialogUI mUI;
};

#endif // CREATE_DATABASE_DIALOG_H
