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
	CVector v1(3, 2), v2(4, 6);
	CDot d1(1, 0), d2(1, 0);
	CVector vscontrol(7, 8), vdcontrol(-1, -4);
	CDot dscontrol(4, 2);
	CVector ddcontrol(0, 0);
	CVector vs = v1 + v2;
	CVector vd = v1 - v2;
	CDot ds = d1 + v1;
	CVector dd = d2 - d1;
	if ((vscontrol.Compare(vs) == 0) && (vdcontrol.Compare(vd) == 0) && (dscontrol.Compare(ds) == 0) && (ddcontrol.Compare(dd) == 0))
	{
		cout << "Autotest1 passed" << endl;
		return 1;
	}
	else
	{
		cout << "Autotest1 failed" << endl;
		return 0;
	}
}
int autotest2()
{
	CVector v1(0, 0), v2(4, 6);
	CDot d1(1, 0), d2(1, 1);
	CVector vscontrol(4, 6), vdcontrol(-4, -6);
	CDot dscontrol(1, 0);
	CVector ddcontrol(0, 1);
	CVector vs = v1 + v2;
	CVector vd = v1 - v2;
	CDot ds = d1 + v1;
	CVector dd = d2 - d1;
	if ((vscontrol.Compare(vs) == 0) && (vdcontrol.Compare(vd) == 0) && (dscontrol.Compare(ds) == 0) && (ddcontrol.Compare(dd) == 0))
	{
		cout << "Autotest2 passed" << endl;
		return 1;
	}
	else
	{
		cout << "Autotest2 failed" << endl;
		return 0;
	}
}
int autotest3()
{
	CVector v1(0, 0), v2(0, 0);
	CDot d1(1, 0), d2(-1, 0);
	CVector vscontrol(0, 0), vdcontrol(0, 0);
	CDot dscontrol(1, 0);
	CVector ddcontrol(-2, 0);
	CVector vs = v1 + v2;
	CVector vd = v1 - v2;
	CDot ds = d1 + v1;
	CVector dd = d2 - d1;
	if ((vscontrol.Compare(vs) == 0) && (vdcontrol.Compare(vd) == 0) && (dscontrol.Compare(ds) == 0) && (ddcontrol.Compare(dd) == 0))
	{
		cout << "Autotest3 passed" << endl;
		return 1;
	}
	else
	{
		cout << "Autotest3 failed" << endl;
		return 0;
	}
}