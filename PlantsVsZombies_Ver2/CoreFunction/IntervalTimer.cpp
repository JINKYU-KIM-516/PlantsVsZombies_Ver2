#include "IntervalTimer.h"

IntervalTimer::IntervalTimer()
    : m_interval(0), m_last(std::chrono::steady_clock::now())
{

}

void IntervalTimer::Init(int p_sec)
{
    m_interval = p_sec;
}

bool IntervalTimer::HasElapsed() const
{
    return std::chrono::duration_cast<std::chrono::seconds>(
        std::chrono::steady_clock::now() - m_last
    ).count() >= m_interval;
}

void IntervalTimer::Tick()
{
    m_last = std::chrono::steady_clock::now();
}