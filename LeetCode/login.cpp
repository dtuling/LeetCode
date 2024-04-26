#include "login.h"
#include "ui_login.h"
#include "listofpic.h"
#include <QPixmap>
#include <QSize>
#include <QDebug>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QSize label_size = ui->image_label->size();
    QPixmap login_map(":/image/2021070311010934.png");
    ui->image_label->setScaledContents(true);
    ui->image_label->setPixmap(login_map);




}

Login::~Login()
{
    delete ui;
}

QPushButton *Login::GetLoginPushButton()
{
    return ui->pushButton_login;
}


