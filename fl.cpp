#include "class.hpp"
int main()
{
	if (autotest() == 0)
	{
	int a[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter " << i + 1 << " element of 1 vector:";
		cin >> a[i];
	}
	CVector v1(a);
	for (int i = 0; i < N; i++)
	{
		cout << "Enter " << i + 1 << " element of 2 vector:";
		cin >> a[i];
	}
	CVector v2(a);
	for (int i = 0; i < N; i++)
	{
		cout << "Enter " << i + 1 << " element of 1 dot:";
		cin >> a[i];
	}
	CDot d1(a);
	for (int i = 0; i < N; i++)
	{
		cout << "Enter " << i + 1 << " element of 2 dot:";
		cin >> a[i];
	}
	CDot d2(a);
	cout << "v1 = "<< v1 << endl;
	cout << "v2 = " << v2 << endl;
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
	CVector vsum, vraz,vdot;
	CDot dsum;
	vsum = v1 + v2;
	vraz = v1 - v2;
	dsum = d1 + v1;
	vdot = d1 - d2;
	cout << "Summa vektorov v1 + v2 = " << vsum << endl;
	cout << "Raznost v1 - v2 = " << vraz << endl;
	cout << "Summa d1 + v1 = " << dsum << endl;
	cout << "Raznost d1 - d2 = " << vdot << endl;
	return 0;
	}
	else
	{
		return 0;
	}
}