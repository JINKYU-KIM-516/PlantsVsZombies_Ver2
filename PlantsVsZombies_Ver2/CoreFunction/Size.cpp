#include "Size.h"

Size::Size()
    :m_width(0), m_height(0)
{

}

Size::Size(int p_width, int p_height)
    :m_width(p_width), m_height(p_height)
{

}

Size::~Size()
{

}

bool Size::operator==(const Size& ref) const
{
    if (m_width == ref.m_width && m_height == ref.m_height)
        return true;
    else
        return false;
}

bool Size::operator!=(const Size& ref) const
{
    if (m_width == ref.m_width && m_height == ref.m_height)
        return false;
    else
        return true;
}

Size Size::operator+=(const Size& ref)
{
    m_width += ref.m_width;
    m_height += ref.m_height;
    return *this;
}

Size Size::operator+(const Size& ref)
{
    return Size(m_width + ref.m_width, m_height + ref.m_height);
}

Size Size::operator-=(const Size& ref)
{
    m_width -= ref.m_width;
    m_height -= ref.m_height;
    return *this;
}

Size Size::operator-(const Size& ref)
{
    return Size(m_width - ref.m_width, m_height - ref.m_height);
}

int Size::GetWidth() const
{
    return m_width;
}

int Size::GetHeight() const
{
    return m_height;
}

void Size::SetWidth(int p_width)
{
    m_width = p_width;
}

void Size::SetHeight(int p_height)
{
    m_width = p_height;
}

void Size::printSize() //디버그용
{
    printf("width : %d, height : %d\n", m_width, m_height);
}
