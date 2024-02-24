#include <iostream>
using namespace std;

int main() 
{
	int y = 65;
	char ch = 'B';
	cout << "문자: " << ch << endl;
	cout << "아스키 코드: " << (int) ch << endl;
	cout << "문자: " << char(y) << endl;			// char(y)는 y를 문자로 변환
//	cout << "아스키 코드 연산: " << ch - 1 << endl; 
	
	return 0; 
}

/*
문자: B
아스키 코드: 66
문자: A
*/
