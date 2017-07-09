#include "notepad.h"
// the above #include searches the current directory for the header files
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Notepad w;
    w.show(); // Widgets aren't visible by default, so we have to use the show() function
    // the next line makes Qt enter its event loop
    return a.exec();
}
