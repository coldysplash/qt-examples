#include "Counter.hpp"

Counter::Counter(QObject* parent, size_t count)
    : QObject(parent), m_Count(count)
{
}

void Counter::plusPlusCount()
{
    emit setNewCount(++m_Count);
    if (m_Count == 5)
        emit goodbye();
}
