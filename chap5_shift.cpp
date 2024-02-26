#include <iostream>
using namespace std;

int main()
{
	short int a, b;
	
	a = -1; b = 32767;
	a = a >> 1;
	b = b >> 1;
	cout << a << endl;
	cout << b << endl;
	
	return 0;
}

/*
-1
16383
*/
