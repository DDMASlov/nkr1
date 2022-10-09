#include "class.hpp"
int main()
{
	if (autotest() == 0)
	{
		int vx1, vx2, vy1, vy2;
		cout << "Enter 1 element of 1 vector: ";
		cin >> vx1;
		cout << "Enter 2 element of 1 vector: ";
		cin >> vy1;
		cout << "Enter 1 element of 2 vector: ";
		cin >> vx2;
		cout << "Enter 2 element of 2 vector: ";
		cin >> vy2;
		CVector v1(vx1, vy1), v2(vx2, vy2);
		int dx1, dy1, dx2, dy2;
		cout << "Enter 1 element of 1 dot: ";
		cin >> dx1;
		cout << "Enter 2 element of 1 dot: ";
		cin >> dy1;
		cout << "Enter 1 element of 2 dot: ";
		cin >> dx2;
		cout << "Enter 2 element of 2 dot: ";
		cin >> dy2;
		CDot d1(dx1, dy1), d2(dx2, dy2);
		cout << "First vector :";
		v1.GetNum();
		cout << "Second vector:";
		v2.GetNum();
		cout << "First dot:";
		d1.GetNum();
		cout << "Second dot:";
		d2.GetNum();
		CVector vsum = v1 + v2;
		CVector vdif = v1 - v2;
		cout << "Sum of vectors:";
		vsum.GetNum();
		cout << "Dif of first vector and second vector:";
		vdif.GetNum();
		CDot dsum = d1 + v1;
		CVector ddif = d2 - d1;
		cout << "Sum of first dot and first vector:";
		dsum.GetNum();
		cout << "Dif of second dot and first dot:";
		ddif.GetNum();
		return 0;
	}
	else
	{
		return 0;
	}
}