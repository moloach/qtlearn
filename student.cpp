#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}


void Student::treat(){
    qDebug() << "treat teacher lunch";
}
