#include "class.hpp"
CVector::CVector()
{
	x = 0;
	y = 0;
}
CVector::CVector(const int a, const int b)
{
	x = a;
	y = b;
}
CVector CVector::operator+(const CVector& other)
{
	CVector rezs;
	rezs.x = x + other.x;
	rezs.y = y + other.y;
	return rezs;
}
CVector CVector::operator-(const CVector& other)
{
	CVector rezd;
	rezd.x = x - other.x;
	rezd.y = y - other.y;
	return rezd;
}
CDot::CDot()
{
	x = 0;
	y = 0;
}
CDot::CDot(const int a, const int b)
{
	x = a;
	y = b;
}
CDot CDot::operator+(const CVector& other)
{
	CDot rez;
	rez.x = x + other.x;
	rez.y = y + other.y;
	return rez;
}
CVector CDot::operator-(const CDot& a)
{
	CVector rez;
	rez.x = x - a.x;
	rez.y = y - a.y;
	return rez;
}
void CDot::GetNum()
{
	cout << "(" << x << "," << y << ")" << endl;
}
void CVector::GetNum()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int CDot::Compare(const CDot& other)
{
	if ((x == other.x) && (y == other.y))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int CVector::Compare(const CVector& other)
{
	if ((x == other.x) && (y == other.y))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}