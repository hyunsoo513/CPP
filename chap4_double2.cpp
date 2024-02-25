#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	double d = 1234.56789;
	cout << d << endl;													// 1234.57로 반올림된 수(근사치) 출력
	cout << setw(13) << setiosflags(ios::scientific) << d << endl;		// 지수형태(1.234568e+003)로 출력
//	cout << setw(8) << setiosflags(ios::scientific) << d << endl;		// 동일하게 출력
	cout.setf(ios_base::fixed, ios_base::floatfield);					// 부동 소수점 실수를 고정 소수점 자리 수를 가지는 형태로 표기하기
	cout.precision(5);													// 소수점 이하 정밀도(자리 수) 지정
	cout << d << endl;
	
	return 0;
}

/*
1234.57
1.234568e+003
1234.56789
*/
