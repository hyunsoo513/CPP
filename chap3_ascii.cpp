#include <iostream>
using namespace std;

int main() 
{
	int y = 65;
	char ch = 'B';
	cout << "����: " << ch << endl;
	cout << "�ƽ�Ű �ڵ�: " << (int) ch << endl;
	cout << "����: " << char(y) << endl;			// char(y)�� y�� ���ڷ� ��ȯ
//	cout << "�ƽ�Ű �ڵ� ����: " << ch - 1 << endl; 
	
	return 0; 
}

/*
����: B
�ƽ�Ű �ڵ�: 66
����: A
*/
