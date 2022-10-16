#include "fl.hpp"
#define N 5
class CVector;
class CDot
{
private:
	int x[N];
public:
	CDot();
	CDot(int* a);
	CDot(const CDot& obj);
	CDot operator+(const CVector& other);
	CVector operator-(const CDot& a);
	CDot& operator=(const CDot& other);
	void GetNum();
	int Compare(const int* a);
};
class CVector
{
	friend class CDot;
private:
	int x[N];
public:
	CVector();
	CVector(int* a);
	CVector(const CVector& obj);
	CVector operator+(const CVector& other);
	CVector operator-(const CVector& other);
	CVector& operator=(const CVector& other);
	void GetNum();
	int Compare(const int* a);
};