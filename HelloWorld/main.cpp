#include <QtWidgets>

int main(int argc, char **argv)
{
    QApplication HelloWorld(argc, argv);
    QLabel label("Hello, world!");
    label.resize(500, 500);
    label.show();
    return HelloWorld.exec();
}
