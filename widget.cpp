#include "widget.h"
#include <QPushButton>
#include <QDebug>

#include "mypushbutton.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* btn =new QPushButton(this);
    //btn->show();
    btn->setParent(this);
    btn->setText("first btn");


    QPushButton* btn2 = new QPushButton("第二个 btn", this);
    btn2->move(100,0);

    //窗口大小
    resize(600,400);

    //设置固定大小
    setFixedSize(600,400);

    //设置窗口标题
    setWindowTitle("第二个 title");


    //对象树会自动创建、释放包含的实例基类为QObject
    MyPushButton* btn3 = new MyPushButton();
    btn3->setText("custom buttom colse!");
    btn3->move(200,0);
    btn3->setParent(this); //设置到对象树中

    //信号槽 类似于C#中的点击事件 此处类似于绑定
    // 参数类型：信号发送者-信号类型-信号接收者-处理的函数
    connect(btn3, &QPushButton::clicked, this, &Widget::close);


    //自定义信号槽
    this->teacher = new Teacher(this);
    this->student = new Student(this);

    //绑定
    connect(teacher, &Teacher::hungry, student, &Student::treat);

    //发送信号
    teacher->hungry();

    //信号发送
    ClassIsOver();
}

void Widget::ClassIsOver(){
    emit teacher->hungry();
}


Widget::~Widget()
{
    //析构从上到下 先析构父类再递归析构子类
    qDebug() << "main widget destory";

}

