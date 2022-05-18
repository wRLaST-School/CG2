#pragma once
#include "Vec2.h"
struct Float2
{
	float x;
	float y;

	void operator = (const Float2& f2)
	{
		x = f2.x; y = f2.y;
	};

	operator Vec2() { return Vec2(x, y); };
};