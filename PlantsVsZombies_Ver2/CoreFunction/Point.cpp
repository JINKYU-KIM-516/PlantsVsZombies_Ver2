#include "Point.h"

Point::Point()
    :m_x(0), m_y(0)
{

}

Point::Point(int p_x, int p_y)
    :m_x(p_x), m_y(p_y)
{

}

Point::~Point()
{

}

bool Point::operator==(const Point& ref) const
{
    if (m_x == ref.m_x && m_y == ref.m_y)
        return true;
    else
        return false;
}

bool Point::operator!=(const Point& ref) const
{
    if (m_x == ref.m_x && m_y == ref.m_y)
        return false;
    else
        return true;
}

Point Point::operator+=(const Point& ref)
{
    m_x += ref.m_x;
    m_y += ref.m_y;
    return *this;
}

Point Point::operator+(const Point& ref)
{
    return Point(m_x + ref.m_x, m_y + ref.m_y);
}

Point Point::operator-=(const Point& ref)
{
    m_x -= ref.m_x;
    m_y -= ref.m_y;
    return *this;
}

Point Point::operator-(const Point& ref)
{
    return Point(m_x - ref.m_x, m_y - ref.m_y);
}

void Point::IncreaseX(int p_x)
{
    m_x += p_x;
}

void Point::IncreaseY(int p_y)
{
    m_y += p_y;

}

void Point::DecreaseX(int p_x)
{
    m_x -= p_x;

}

void Point::DecreaseY(int p_y)
{
    m_y -= p_y;

}

int Point::GetX() const
{
    return m_x;
}

int Point::GetY() const
{
    return m_y;
}

void Point::SetX(int p_x)
{
    m_x = p_x;
}

void Point::SetY(int p_y)
{
    m_y = p_y;
}

void Point::printPoint() //디버그용
{
    printf("x: %f, y : %f\n", m_x, m_y);
}
