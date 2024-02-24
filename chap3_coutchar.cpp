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
	cout.fill();	// 재지정하여 원래 빈 칸으로 출력하도록 설정
	cout << str << endl;
	 
	return 0;
}
/*
123456789012134567890123456789
-----A
------Happy!
Happy!
*/
