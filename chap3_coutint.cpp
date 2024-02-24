#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int result;
	
	cout << "정수 입력: "; cin >> i;	// 키보드로부터 데이터 입력
	cout << "정수 입력: "; cin >> j;
	result = i + j;						// 결과 = 피연산자1 + 피연산자2
	cout << "결과 : " << result << endl;				// 결과를 화면에 출력 
	 
	return 0; 
}

/*
정수 입력: 5
정수 입력: 7
결과 : 12
*/
