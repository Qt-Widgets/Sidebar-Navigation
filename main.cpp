#include <QApplication>
#include "sidebar.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SideBar w;
    w.resize(180, 546);
    w.addAction("Library", QIcon(":/library.png"));
    w.addAction("Actors");
    w.addAction("Directors");
    w.addAction("Genres");
    w.addAction("Countries");
    w.addAction("Tags");
    w.show();

    return a.exec();
}
