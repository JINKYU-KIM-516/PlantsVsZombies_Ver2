#pragma once
#include <windows.h>
#pragma comment(lib, "msimg32.lib")
#include <string>
#include "Point.h"
#include "Size.h"
#include "../Information/Constants.h"

class Image
{
protected:
	Point m_position;
	Size m_size;
	wstring m_imagePath;

	HBITMAP m_hBmp;
public:
	Image();
	Image(Point p_pos, Size p_size, const wstring p_imagePath);
	~Image();
	void Init(Point p_pos, Size p_size, const wstring p_imagePath);
	void Load();
	void Draw(HDC p_hdc);

	Point GetPos() const;
	Size GetSize() const;
	wstring GetImagePath() const;

	void SetPos(Point p_pos);
	void SetSize(Size p_size);
	void SetImage(const wstring p_imagePath);
};