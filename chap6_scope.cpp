#include <iostream>
using namespace std;
int x = 100;			// ���� ���� 

int main()
{
	int x = 10;			// ���� ���� 
	int y = 3;			// ���� ����
	
	cout << "���� ���� x = " << x << endl;
	cout << "���� ���� y = " << y << endl;
	cout << "���� ���� x = " << ::x << endl;
	x = y + ::x;
	cout << "���� ���� x = " << x << endl;

	return 0; 
}

/*
���� ���� x = 10
���� ���� y = 3
���� ���� x = 100
���� ���� x = 103
*/
