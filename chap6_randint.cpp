#include <iostream>			// cout ��� 
#include <cstdlib>			// srand(), rand() ���
#include <iomanip>			// setw() ���
#include <ctime>			// time() ��� 
using namespace std;

int main()
{
	srand(time(0));			// ��ǻ�� clock�� �о� ����ǥ�� seed�� ����
	for (int i = 1; i < 11; i++)
//	for (int i = 1; i < 50; i++)
	{
		cout << setw(5) << (1 + rand() % 7);
		if(i % 5 == 0)		// �� �ٿ� 5���� ���
			cout << endl; 
			
//		cout << setw(5) << (1 + rand() % 45);
//		if(i % 6 == 0)		// �� �ٿ� 5���� ���
//			cout << endl; 
	 } 
	cout << endl;
	
	return 0;
}

/*
    2    7    4    4    6
    3    3    3    3    3
*/
