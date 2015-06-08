import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import Ruan.People 1.0

ApplicationWindow {
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }

    }
    Per {
        id: p0
        name: qsTr("TOM")
        onNameChange:{
                    p0.debug("name change !!")
                }
    }
    MainForm {
        anchors.fill: parent
        button1.onClicked: p0.print()
        button2.onClicked: {
            p0.print1()
            p0.debug(p0.name)
            //p0.name: qsTr("Marry")

        }
        button3.onClicked: {
            p0.name = qsTr("Marry")
        }
        //button3.onClicked: messageDialog.show(qsTr("Button 3 pressed"))

    }

    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }
}
