#ifndef PEOPLE_H
#define PEOPLE_H

#include <QObject>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>

class People : public QObject
{
    Q_OBJECT
     Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChange)

public:
    explicit People(QObject *parent = 0);
    ~People();
    Q_INVOKABLE void print(void);

    QString getName();
    void setName(QString);

signals:
    void nameChange();

public slots:
   void print1(void);
    void debug(QString msg);
private:
   QString gName;
   QSerialPort tty;
};

#endif // PEOPLE_H
