#include "listofpic.h"
#pragma execution_character_set("utf-8")

#include <QDebug>
ListOfPic::ListOfPic(QWidget *parent)
{
    this->addItem("NO1:两数之和");
    this->addItem("NO2:两数相加");
    this->addItem("NO3:合并两个有序链表");
    this->addItem("两数之和");
    this->addItem("两数之和");
    this->addItem("两数之和");
    this->addItem("两数之和");
    this->addItem("两数之和");
    this->addItem("两数之和");
    this->addItem("两数之和");

    connect(this, &QListWidget::itemClicked, this, [](){
        qDebug() << "我送偶是诉讼";
    });


}

