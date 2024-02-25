#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::right, ios::adjustfield);	// 오른쪽 정렬
	cout.setf(ios::showpos);					// +기호를 붙여서 출력
	cout.precision(3);							// 소수점 이하 정밀도(자리 수) 지정
	
	double d = 10.0 / 3.0;
	cout.width(30);								// 자릿수 30칸 지정
	cout << d << endl;
	
	return 0; 
 } 
 
 /*
                         +3.333
 */
