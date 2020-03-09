#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPixmap pixmap(":/new/prefix1/Image/couverture.png");
    QSplashScreen splash(pixmap);
    splash.show();
    app.processEvents();
    QMainWindow window;
    window.show();
    splash.finish(&window);
    return app.exec();
}
