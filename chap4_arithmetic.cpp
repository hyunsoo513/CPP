#include <iostream>
using namespace std;

int main()
{
	int add, sub, mult, mod, x, y;
	double div;
	
	x = 3; y = 7;
	add = x + y; sub = y - x; mult = x * y;
	div = (double) y / (double) x;
//	div = (double) y / x;
//	div = y / x;
	mod = y % x;
	
	cout << x << " + " << y << " = " << add << endl;
	cout << y << " - " << x << " = " << sub << endl;
	cout << x << " * " << y << " = " << mult << endl;
	cout << y << " / " << x << " = " << div << endl;
	cout << y << " % " << x << " = " << mod << endl;
	
	return 0; 
}

/*
3 + 7 = 10
7 - 3 = 4
3 * 7 = 21
7 / 3 = 2.33333
7 % 3 = 1
*/
