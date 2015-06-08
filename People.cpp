#include "People.h"
#include <QDebug>


People::People(QObject *parent) : QObject(parent)
{
    gName = "LiSa";
    tty.setPortName("/dev/ttyUSB0");
    qDebug() << "people init";
}

People::~People()
{
    qDebug() << "people deinit";
}
void People::print()
{

    qDebug() << "peopel say ok";
}
void People::print1()
{
    qDebug() << "peopel say ok too";
}
QString People::getName()
{
    return gName;
}

void People::setName(QString name)
{
    gName = name;
    qDebug() << "setName ...";
    emit nameChange();
}
void People::debug(QString msg)
{
    qDebug() << msg;
}
