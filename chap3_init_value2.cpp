#include <iostream>
using namespace std;

int gx, gy;			// 전역변수 선언
int main()
{
	int lx, ly;		// 지역변수 선언
	cout << "전역변수 gx 초기값 = " << gx << endl;
	cout << "전역변수 gy 초기값 = " << gy << endl;
	cout << "지역변수 lx 초기값 = " << lx << endl;
	cout << "지역변수 ly 초기값 = " << ly << endl;
	
	return 0; 
 } 
 
 /*
전역변수 gx 초기값 = 0
전역변수 gy 초기값 = 0
지역변수 lx 초기값 = 0				// 우연히 0 나온 것 
지역변수 ly 초기값 = 97
 */
