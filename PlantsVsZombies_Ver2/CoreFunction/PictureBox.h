#pragma once
#include <windows.h>
#pragma comment(lib, "msimg32.lib")
#include <string>
#include "Point.h"
#include "Size.h"
#include "HitBox.h"
#include "../Information/Constants.h"

class PictureBox
{
protected:
	Point m_position;
	Size m_size;

	HBITMAP m_hBmp;
	wstring m_imagePath;
public:
	PictureBox(Point p_pos, Size p_size, const wstring p_imagePath);
	~PictureBox();
	virtual void Draw(HDC hdc);

	Point GetPos() const;
	Size GetSize() const;
	HitBox GetHitBox() const;

	RECT GetRect() const;
	bool IsCollided(const PictureBox *p_pictureBox);
	bool Contains(Point p_pos) const;

	void SetPos(Point p_pos);
	void SetImage(const wstring p_imagePath);
};