#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "teacher.h"
#include "student.h"

class Widget : public QWidget
{
    Q_OBJECT //宏，允许使用信号和槽

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private:
    Teacher* teacher;
    Student* student;

    void ClassIsOver();
};
#endif // WIDGET_H
