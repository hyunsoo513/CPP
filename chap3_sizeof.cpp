#include <iostream>
using namespace std;
#include <climits>

int main()
{	
	cout << "int ũ��: " << sizeof(int) << " bytes" << endl;
	cout << "double ũ��: " << sizeof(double) << " bytes" << endl;
	cout << "int �ִ� ũ��: " << INT_MAX << " bytes" << endl;
//	cout << "int �ִ� ũ��: " << INT_MIN << " bytes" << endl;
//	cout << "short ũ��: " << sizeof(short) << " bytes" << endl;
	
	return 0; 
}

/*
int ũ��: 4 bytes
double ũ��: 8 bytes
int �ִ� ũ��: 2147483647 bytes
*/
