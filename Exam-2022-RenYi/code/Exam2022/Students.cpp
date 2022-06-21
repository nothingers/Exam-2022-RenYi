#include "Students.h"
#include <QDebug>

Students::Students()
{

}

void Students::display()
{
    qInfo()<<number<<name<<classname<<math<<physics<<english;
}
