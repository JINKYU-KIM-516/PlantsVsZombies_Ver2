#include "PictureBox.h"
#include "Image.h"

PictureBox::PictureBox(Point p_pos, Size p_size, const wstring p_imagePath)
{
    m_size = p_size;
    m_position = p_pos;

    m_imagePath = p_imagePath;

    m_hBmp = (HBITMAP)LoadImage(NULL, m_imagePath.c_str(), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    if (m_hBmp == nullptr)
    {
        MessageBox(NULL, L"Init 비트맵 실패", L"오류", MB_OK);
    }
}

PictureBox::~PictureBox()
{
    if (m_hBmp)
    {
        DeleteObject(m_hBmp);
        m_hBmp = nullptr;
    }
}

void PictureBox::Draw(HDC hdc)
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

Point PictureBox::GetPos() const
{
    return m_position;
}

Size PictureBox::GetSize() const
{
    return m_size;
}

HitBox PictureBox::GetHitBox() const
{
    HitBox hitbox;
    hitbox.Init(
        m_position.GetX(),
        m_position.GetY(),
        m_position.GetX() + m_size.GetWidth(),
        m_position.GetY() + m_size.GetHeight()
    );

    return hitbox;
}

RECT PictureBox::GetRect() const
{
    RECT rc;
    rc.left = m_position.GetX();
    rc.top = m_position.GetY();
    rc.right = rc.left + m_size.GetWidth();
    rc.bottom = rc.top + m_size.GetHeight();
    return rc;
}

bool PictureBox::IsCollided(const PictureBox* p_pictureBox)
{
    HitBox hitBox = this->GetHitBox();
    return hitBox.IntersectHitBox(p_pictureBox->GetHitBox());
}

bool PictureBox::Contains(Point p_pos) const
{
    HitBox hitBox = this->GetHitBox();
    return (p_pos.GetX() >= hitBox.GetLeft() && p_pos.GetX() <= hitBox.GetRight() &&
        p_pos.GetY() >= hitBox.GetTop() && p_pos.GetY() <= hitBox.GetBottom());
}

void PictureBox::SetPos(Point p_pos)
{
    m_position = p_pos;
}

void PictureBox::SetImage(const wstring p_imagePath)
{
    m_imagePath = p_imagePath;
    m_hBmp = (HBITMAP)LoadImage(NULL, m_imagePath.c_str(), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    if (m_hBmp == nullptr)
    {
        MessageBox(NULL, L"비트맵 실패", L"오류", MB_OK);
    }
}