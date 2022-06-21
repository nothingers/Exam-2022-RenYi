#ifndef STUDENTS_H
#define STUDENTS_H
#include<QString>


class Students
{
public:
    Students();
    void display();




    QString number;
    QString name;
    QString classname;
    qreal math;
    qreal physics;
    qreal english;
};

#endif // STUDENTS_H
