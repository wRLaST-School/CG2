#pragma once
class Vec2
{
public:
	float x;
	float y;

	Vec2();
	Vec2(float x, float y);

	void SetX(float x);

	void SetY(float y);

	//Sqrtが呼ばれる
	void SetLength(float l);

	const Vec2 operator+(const Vec2& v2) const;

	const Vec2 operator-(const Vec2& v2) const;

	const Vec2 operator*(float mul) const;

	const Vec2 operator/(float div) const;

	Vec2& operator +=(const Vec2& v2);

	Vec2& operator -=(const Vec2& v2);

	Vec2& operator *=(float mul);

	Vec2& operator /=(float div);

	float Dot(const Vec2& v2) const;

	float Cross(const Vec2& v2) const;

	//Sqrtが呼ばれる
	Vec2& Norm();

	//Sqrtが呼ばれる
	Vec2 GetNorm() const;

	float GetLength() const;

	float GetSquaredLength() const;
};

