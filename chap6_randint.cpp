#include <iostream>			// cout 사용 
#include <cstdlib>			// srand(), rand() 사용
#include <iomanip>			// setw() 사용
#include <ctime>			// time() 사용 
using namespace std;

int main()
{
	srand(time(0));			// 컴퓨터 clock을 읽어 난수표의 seed를 지정
	for (int i = 1; i < 11; i++)
//	for (int i = 1; i < 50; i++)
	{
		cout << setw(5) << (1 + rand() % 7);
		if(i % 5 == 0)		// 한 줄에 5개씩 출력
			cout << endl; 
			
//		cout << setw(5) << (1 + rand() % 45);
//		if(i % 6 == 0)		// 한 줄에 5개씩 출력
//			cout << endl; 
	 } 
	cout << endl;
	
	return 0;
}

/*
    2    7    4    4    6
    3    3    3    3    3
*/
