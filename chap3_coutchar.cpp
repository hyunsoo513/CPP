#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	char ch = 'A';
	char str[] = "Happy!";
	cout << "123456789012134567890123456789" << endl;
	cout.fill('-');
	cout << setw(6) << ch << endl;
	cout << setw(12) << str << endl;
	cout.fill();	// �������Ͽ� ���� �� ĭ���� ����ϵ��� ����
	cout << str << endl;
	 
	return 0;
}
/*
123456789012134567890123456789
-----A
------Happy!
Happy!
*/
