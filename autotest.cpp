#include "autotest.hpp"
int autotest()
{
	if (autotest1() && autotest2() && autotest3() == 1)
	{
		cout << "Autotest passed" << endl;
		return 0;
	}
	else
	{
		cout << "Autotest failed" << endl;
		return 1;
	}
}
int autotest1()
{
	int a[N], b[N],c[N],d[N];
	int sumv[N], difv[N], sumd[N], difd[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = i;
		b[i] = (-1)*i;
		c[i] = 0;
		d[i] = 8 - i;
		sumv[i] = a[i] + b[i];
		difv[i] = a[i] - b[i];
		sumd[i] = c[i] + a[i];
		difd[i] = c[i] - d[i];
	}
	CVector v1(a), v2(b);
	CDot d1(c), d2(d);
	CVector vs = v1 + v2;
	CVector vd = v1 - v2;
	CDot sd = d1 + v1;
	CVector dd = d1 - d2;
	if ((dd.Compare(difd)) && (sd.Compare(sumd)) && (vd.Compare(difv)) && (vs.Compare(sumv)))
	{
		cout << "Autotest1 passed!" << endl;
		return 1;
	}
	else
	{
		cout << "Autotest1 failed!" << endl;
		return 0;
	}
}
int autotest2()
{
	int a[N], b[N], c[N], d[N];
	int sumv[N], difv[N], sumd[N], difd[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = 2*i;
		b[i] = 3 + i;
		c[i] = 3 - i;
		d[i] = i;
		sumv[i] = a[i] + b[i];
		difv[i] = a[i] - b[i];
		sumd[i] = c[i] + a[i];
		difd[i] = c[i] - d[i];
	}
	CVector v1(a), v2(b);
	CDot d1(c), d2(d);
	CVector vs = v1 + v2;
	CVector vd = v1 - v2;
	CDot sd = d1 + v1;
	CVector dd = d1 - d2;
	if ((dd.Compare(difd)) && (sd.Compare(sumd)) && (vd.Compare(difv)) && (vs.Compare(sumv)))
	{
		cout << "Autotest2 passed!" << endl;
		return 1;
	}
	else
	{
		cout << "Autotest2 failed!" << endl;
		return 0;
	}
}
int autotest3()
{
	int a[N], b[N], c[N], d[N];
	int sumv[N], difv[N], sumd[N], difd[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = 0;
		b[i] = i;
		c[i] = i;
		d[i] = 4 + i;
		sumv[i] = a[i] + b[i];
		difv[i] = a[i] - b[i];
		sumd[i] = c[i] + a[i];
		difd[i] = c[i] - d[i];
	}
	CVector v1(a), v2(b);
	CDot d1(c), d2(d);
	CVector vs = v1 + v2;
	CVector vd = v1 - v2;
	CDot sd = d1 + v1;
	CVector dd = d1 - d2;
	if ((dd.Compare(difd)) && (sd.Compare(sumd)) && (vd.Compare(difv)) && (vs.Compare(sumv)))
	{
		cout << "Autotest3 passed!" << endl;
		return 1;
	}
	else
	{
		cout << "Autotest3 failed!" << endl;
		return 0;
	}
}