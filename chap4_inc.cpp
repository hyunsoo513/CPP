#include <iostream>
using namespace std;

int main()
{
	int x, y, p;
	x = 3; y = x++;
	cout << "x = " << x << " " << " y = " << y << endl;
	x = 10; y = ++x;
	cout << "x = " << x << " " << "y = " << y << endl;
	p = ++x + y++;		// ++x �� ������ �� x �� y�� ���� ����� p�� ������ ���� y++ �� ����
	
	cout << "x = " << x << " " << "y = " << y;
	cout << "   p = " << p << endl;
	
	return 0;
}

/*
x = 4  y = 3
x = 11 y = 11
x = 12 y = 12   p = 23
*/
