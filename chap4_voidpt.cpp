#include <iostream>
using namespace std;

int main()
{
	int i ;				// int 타입 변수 
	void *pt;			// void 타입 변수, 타입이 결정되지 않는 객체에 대한 포인터 
	pt = &i;			// int 타입의 주소를 void 포인터 변수 pt 에 저장 
	cout << (int *)pt;	// void 포인터 변수 pt 를 int *로 형 변환 
	void f();			// 함수 f는 실행한 후 값을 반환하지 않음 
	
	return 0;
}

/*
0x6ffe14
*/
