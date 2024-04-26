#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();


    QPushButton* GetLoginPushButton();
private:
    Ui::Login *ui;
};

#endif // LOGIN_H
