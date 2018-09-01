#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QString>
#include <Constants.h>



int main(int argc, char* argv[]) {
    /*
     * @brief construct a QApplication before using a QWidget
     * */
    QApplication a(argc,argv);
    QMainWindow window;
    QLabel *label = new QLabel(&window);
    QString qt_version = "Qt version: ";
    qt_version.append(QT_VERSION_STR);
    window.resize(B_WIDTH,B_HIGHT);

    window.setWindowTitle("Qt Snake");
    label->setText(qt_version);
    window.show();

    return a.exec();

}