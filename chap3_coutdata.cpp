#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	char ch = 'A';
	char *pt = "Vision";			// �����͸� ����� "���ڿ�"
	char str[] = "Love";			// �迭�� ����� "���ڿ�"
	
	cout << x << "\n";
	cout << ch << "\n";
	cout << "Happy\n";				// ���ڿ� "Happy" �� ����ϰ� �ٹٲ� 
	cout << pt << "\n";  			// �����ͺ����� ���ڿ� Vision �� ���
//	cout << &pt << "\n";
	cout << str << "\n";			// �迭�� ����� ���ڿ� Love �� ���
	
	return 0; 
}

/*
5
A
Happy
Vision
Love
*/
