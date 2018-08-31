#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QString>

int main(int argc, char* argv[]) {
    /*
     * @brief construct a QApplication before using a QWidget
     * */
    QApplication a(argc,argv);
    QMainWindow window;
    QLabel *label = new QLabel(&window);
    QString qt_version = "Qt version: ";
    qt_version.append(QT_VERSION_STR);
    window.resize(300,300);
    window.setWindowTitle("Qt Snake");
    label->setText(qt_version);
    window.show();

    return a.exec();

}