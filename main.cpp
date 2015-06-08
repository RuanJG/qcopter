#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <People.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    qmlRegisterType<People>("Ruan.People",1,0,"Per");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
