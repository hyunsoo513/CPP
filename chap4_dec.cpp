#include <iostream>
using namespace std;

int main()
{
	int x, y, p;
	x = 3; y = x--;
	cout << "x = " << x << " " << " y = " << y << endl;
	x = 10; y = --x;
	cout << "x = " << x << " " << " y = " << y << endl;
	p = --x + y--;
	
	cout << "x = " << x << " " << " y = " << y;
	cout << "   p = " << p << endl;
	
	return 0;
}
/*
x = 2  y = 3
x = 9  y = 9
x = 8  y = 8   p = 17
*/
