#pragma once
#include <iostream>
using namespace std;

class Size
{
private:
	int m_width;
	int m_height;
public:
	Size();
	Size(int p_width, int p_height);
	~Size();

	bool operator==(const Size& ref) const;
	bool operator!=(const Size& ref) const;
	Size operator+=(const Size& ref);
	Size operator+(const Size& ref);
	Size operator-=(const Size& ref);
	Size operator-(const Size& ref);

	int GetWidth() const;
	int GetHeight() const;

	void SetWidth(int p_width);
	void SetHeight(int p_height);

	void printSize();
};