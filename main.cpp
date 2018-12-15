#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QStringList paths = QCoreApplication::libraryPaths();

    paths.append(".");
    paths.append("imageformats");
    paths.append("platforms");
    paths.append("sqldrivers");
    paths.append("iconengines");
    QCoreApplication::setLibraryPaths(paths);
    QApplication a(argc, argv);
    main_window w;
    w.setMinimumHeight(768);
    w.setMinimumWidth(1024);
    w.show();

    return a.exec();
}
