#include "mypushbutton.h"
#include <QDebug>

MyPushButton::MyPushButton(QPushButton *parent) : QPushButton(parent)
{
    qDebug() << "custom button build";
}

MyPushButton::~MyPushButton(){
    qDebug() << "custom button destory";
}
