#pragma once

#include <QObject>
#include <QtWidgets/QtWidgets>

class Counter : public QObject {
    Q_OBJECT

public:
    Counter(QObject* parent = nullptr, size_t count = 0);

private:
    size_t m_Count;

public slots:
    void plusPlusCount();

signals:
    void goodbye();
    void setNewCount(size_t count);
};
