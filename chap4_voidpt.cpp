#include <iostream>
using namespace std;

int main()
{
	int i ;				// int Ÿ�� ���� 
	void *pt;			// void Ÿ�� ����, Ÿ���� �������� �ʴ� ��ü�� ���� ������ 
	pt = &i;			// int Ÿ���� �ּҸ� void ������ ���� pt �� ���� 
	cout << (int *)pt;	// void ������ ���� pt �� int *�� �� ��ȯ 
	void f();			// �Լ� f�� ������ �� ���� ��ȯ���� ���� 
	
	return 0;
}

/*
0x6ffe14
*/
