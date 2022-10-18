#include "class.hpp"
CVector::CVector()
{
	for (int i = 0; i < N; i++)
	{
		x[i] = rand();
	}
}
CVector::CVector(int* a)
{
	for (int i = 0; i < N; i++)
	{
		x[i] = a[i];
	}
}
CVector::CVector(const CVector& obj)
{
	for (int i = 0; i < N; i++)
	{
		x[i] = obj.x[i];
	}
}
CDot::CDot(const CDot& obj)
{
	for (int i = 0; i < N; i++)
	{
		x[i] = obj.x[i];
	}
}
CDot& CDot::operator=(const CDot& other)
{
	for (int i = 0; i < N; i++)
	{
		x[i] = other.x[i];
	}
	return *this;
}
CVector& CVector::operator=(const CVector& other)
{
	for (int i = 0; i < N; i++)
	{
		x[i] = other.x[i];
	}
	return *this;
}
CVector CVector::operator+(const CVector& other)
{
	CVector rezs;
	for (int i = 0; i < N; i++)
	{
		rezs.x[i] = x[i] + other.x[i];
	}
	return rezs;
}
CVector CVector::operator-(const CVector& other)
{
	CVector rezd;
	for (int i = 0; i < N; i++)
	{
		rezd.x[i] = x[i] - other.x[i];
	}
	return rezd;
}
CDot::CDot()
{
	for (int i = 0; i < N; i++)
	{
		x[i] = rand();
	}
}
CDot::CDot(int* a)
{
	for (int i = 0; i < N; i++)
	{
		x[i] = a[i];
	}
}
CDot CDot::operator+(const CVector& other)
{
	CDot rez;
	for (int i = 0; i < N; i++)
	{
		rez.x[i] = x[i] + other.x[i];
	}
	return rez;
}
CVector CDot::operator-(const CDot& a)
{
	CVector rez;
	for (int i = 0; i < N; i++)
	{
		rez.x[i] = x[i] - a.x[i];
	}
	return rez;
}
int CDot::Compare(const int* a)
{
	int cntrl = 0;
	for (int i = 0; i < N; i++)
	{
		if (a[i] == x[i])
			cntrl++;
	}
	if (cntrl == N)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int CVector::Compare(const int* a)
{
	int cntrl = 0;
	for (int i = 0; i < N; i++)
	{
		if (a[i] == x[i])
			cntrl++;
	}
	if (cntrl == N)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
ostream& operator<<(ostream& cout, CVector& a)
{
	cout << "(";
	for (int i = 0; i < N; i++)
	{
		cout << a.x[i];
		if (i != N - 1)
			cout << ",";
	}
	cout << ")";
	return cout;
}
ostream& operator<<(ostream& cout, CDot& a)
{
	cout << "(";
	for (int i = 0; i < N; i++)
	{
		cout << a.x[i];
		if (i != N - 1)
			cout << ",";
	}
	cout << ")";
	return cout;
}