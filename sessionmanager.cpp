#include "sessionmanager.h"
#include "ui_sessionmanager.h"

SessionManager::SessionManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SessionManager)
{
    ui->setupUi(this);
}

SessionManager::~SessionManager()
{
    delete ui;
}
