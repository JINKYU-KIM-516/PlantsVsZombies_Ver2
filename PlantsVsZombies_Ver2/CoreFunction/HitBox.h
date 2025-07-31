#pragma once
#include "Point.h"

class HitBox
{
protected:
	int m_left; //왼쪽 위 모서리 x 좌표
	int m_top; //왼쪽 위 모서리 y 좌표
	int m_right; //오른쪽 아래 모서리 x 좌표
	int m_bottom; //오른쪽 아래 모서리 y 좌표
public:
	void Init(int p_left, int p_top, int p_right, int p_bottom);
	bool IntersectHitBox(HitBox p_hitbox) const;
	bool Contains(Point p_pos) const;

	int GetLeft() const;
	int GetTop() const;
	int GetRight() const;
	int GetBottom() const;
};