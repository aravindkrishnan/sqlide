#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sessionmanager.h"
 #include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionSession_Manager,SIGNAL(triggered()),this,SLOT(Session_Manager_Click()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Session_Manager_Click()
{
 //   QMessageBox msgBox;
 //   msgBox.setText("The document has been modified.");
 //   msgBox.exec();
    SessionManager s;
    s.exec();

}
