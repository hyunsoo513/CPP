#include <iostream>
using namespace std;

int main()
{
	char ch;
	char test;
	
	cout << "단일 문자 입력: ";
	ch = cin.get();			// cin.get(ch) 와 동일, 한 개의 문자를 입력하여 변수 ch 에 저장
	cout << ch;

//	cout << "단일 문자 입력: ";
//	cin.get(test);
//	cout << test;
		
	return 0; 
}

/*
단일 문자 입력: W
W
*/
