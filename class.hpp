#include "fl.hpp"
class CVector;
class CDot
{
private:
	int x, y;
public:
	CDot();
	CDot(const int a, const int b);
	CDot operator+(const CVector& other);
	CVector operator-(const CDot& a);
	void GetNum();
	int Compare(const CDot& other);
};
class CVector
{
	friend class CDot;
private:
	int x, y;
public:
	CVector();
	CVector(const int a, const int b);
	CVector operator+(const CVector& other);
	CVector operator-(const CVector& other);
	void GetNum();
	int Compare(const CVector& other);
};