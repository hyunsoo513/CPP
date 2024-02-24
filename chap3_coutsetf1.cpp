#include <iostream>
using namespace std;

int main()
{
	int i = 19;
	
	cout << i << "\n";
	cout.setf(ios::showpos);		// + 기호를 붙인 양수
	cout << i << endl;
	cout.setf(ios::showbase);		// 16진수는 0x, 8진수는 0을 붙임
	cout << oct << i << endl;
//	cout << hex << 19 << "\n";
	cout.setf(ios::uppercase);		// 16진수 표시에 사용되는 영문자를 대문자로 표시
	cout << hex << 19 << "\n";
	
	return 0; 
}

/*
19
+19
023
0X13
*/
