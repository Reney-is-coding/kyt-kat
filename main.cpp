#include "mywindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mywindow win;
    win.show();
    app.exec();
    return 0;
}

