#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	char ch = 'A';
	char *pt = "Vision";			// 포인터를 사용한 "문자열"
	char str[] = "Love";			// 배열을 사용한 "문자열"
	
	cout << x << "\n";
	cout << ch << "\n";
	cout << "Happy\n";				// 문자열 "Happy" 를 출력하고 줄바꿈 
	cout << pt << "\n";  			// 포인터변수의 문자열 Vision 을 출력
//	cout << &pt << "\n";
	cout << str << "\n";			// 배열에 저장된 문자열 Love 를 출력
	
	return 0; 
}

/*
5
A
Happy
Vision
Love
*/
