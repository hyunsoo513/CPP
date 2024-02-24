#include <iostream>
using namespace std;
#include <climits>

int main()
{	
	cout << "int 크기: " << sizeof(int) << " bytes" << endl;
	cout << "double 크기: " << sizeof(double) << " bytes" << endl;
	cout << "int 최대 크기: " << INT_MAX << " bytes" << endl;
//	cout << "int 최대 크기: " << INT_MIN << " bytes" << endl;
//	cout << "short 크기: " << sizeof(short) << " bytes" << endl;
	
	return 0; 
}

/*
int 크기: 4 bytes
double 크기: 8 bytes
int 최대 크기: 2147483647 bytes
*/
