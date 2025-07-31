#include "Image.h"

Image::Image()
{
    Init(Point(0, 0), Size(0, 0), L"");
}

Image::Image(Point p_pos, Size p_size, const wstring p_imagePath)
{
    Init(p_pos, p_size, p_imagePath);
}

Image::~Image()
{
    if (m_hBmp)
    {
        DeleteObject(m_hBmp);
        m_hBmp = nullptr;
    }
}

void Image::Init(Point p_pos, Size p_size, const wstring p_imagePath)
{
    m_size = p_size;
    m_position = p_pos;
    m_imagePath = p_imagePath;
}

void Image::Load()
{
    m_hBmp = (HBITMAP)LoadImage(NULL, m_imagePath.c_str(), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    if (m_hBmp == nullptr)
    {
        MessageBox(NULL, L"Init 비트맵 실패", L"오류", MB_OK);
    }
}

void Image::Draw(HDC hdc)
{
    if (!m_hBmp) {
        MessageBox(NULL, L"비트맵 로드 실패", L"오류", MB_OK);
        return;
    }

    BITMAP bmp;
    GetObject(m_hBmp, sizeof(BITMAP), &bmp);

    HDC hdcMem = CreateCompatibleDC(hdc);
    HGDIOBJ oldBmp = SelectObject(hdcMem, m_hBmp);

    TransparentBlt(hdc,
        m_position.GetX(), m_position.GetY(),
        m_size.GetWidth(), m_size.GetHeight(),
        hdcMem, 0, 0, bmp.bmWidth, bmp.bmHeight,
        TRANSPARENT_COLOR);

    SelectObject(hdcMem, oldBmp);
    DeleteDC(hdcMem);
}

Point Image::GetPos() const
{
    return m_position;
}

Size Image::GetSize() const
{
    return m_size;
}

wstring Image::GetImagePath() const
{
    return m_imagePath;
}

void Image::SetPos(Point p_pos)
{
    m_position = p_pos;
}

void Image::SetSize(Size p_size)
{
    m_size = p_size;
}

void Image::SetImage(const wstring p_imagePath)
{
    m_imagePath = p_imagePath;
}