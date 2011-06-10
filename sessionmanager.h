#ifndef SESSIONMANAGER_H
#define SESSIONMANAGER_H

#include <QDialog>

namespace Ui {
    class SessionManager;
}

class SessionManager : public QDialog
{
    Q_OBJECT

public:
    explicit SessionManager(QWidget *parent = 0);
    ~SessionManager();

private:
    Ui::SessionManager *ui;

};

#endif // SESSIONMANAGER_H
