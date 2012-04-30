#include "myform.h"
#include <QtGui>

myform::myform(){

    //setupUi( this );

    str = "nothing";
    label = new QLabel(str);
    label->show();
}
myform::~myform()
{
}

