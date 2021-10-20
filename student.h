#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

    //槽函数，早期版本需要再public slots下定义, 需要声明和定义
    void treat();
signals:

};

#endif // STUDENT_H
