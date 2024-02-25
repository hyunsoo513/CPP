#include <iostream>
using namespace std;

int main()
{
	int x, y, p;
	x = 3; y = x++;
	cout << "x = " << x << " " << " y = " << y << endl;
	x = 10; y = ++x;
	cout << "x = " << x << " " << "y = " << y << endl;
	p = ++x + y++;		// ++x 를 수행한 후 x 와 y를 더한 결과를 p에 저장한 다음 y++ 를 수행
	
	cout << "x = " << x << " " << "y = " << y;
	cout << "   p = " << p << endl;
	
	return 0;
}

/*
x = 4  y = 3
x = 11 y = 11
x = 12 y = 12   p = 23
*/
