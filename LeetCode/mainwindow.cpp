#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->resize(800,600);
    _stackedWidget = new QStackedWidget(this);
    _login_widget = new Login(this);

    _stackedWidget->addWidget(_login_widget);


    setCentralWidget(_stackedWidget); // 设置QWidget为中心部件

    connect(_login_widget->GetLoginPushButton(),&QPushButton::clicked, [this](){
        _list_pic= new ListOfPic(this);
        _stackedWidget->addWidget(_list_pic);
        _stackedWidget->setCurrentWidget(_list_pic);
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

