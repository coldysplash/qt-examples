#include "Counter.hpp"

#include <QApplication>
#include <QtWidgets/QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    Counter counter;

    QLabel label;
    QPushButton button("Click me!");

    button.show();
    label.show();

    QObject::connect(
            &button, SIGNAL(clicked()), &counter, SLOT(plusPlusCount()));

    QObject::connect(
            &counter, &Counter::setNewCount, &label, [&](size_t count) {
                label.setText(QString::number(count));
            });

    QObject::connect(&counter, SIGNAL(goodbye()), &app, SLOT(quit()));

    return app.exec();
}
