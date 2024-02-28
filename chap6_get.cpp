#include <iostream>
using namespace std;

int main()
{
	char ch;
	
	cout << "단일 문자를 입력한 후 Enter 키를 누르세요!\n";
	cout << "Ctrl + z 키를 입력한 후 Enter 키를 누르면 종료합니다!\n";
	while((ch = cin.get()) != EOF)
		cout << ch;
	
	return 0;
}

/*
단일 문자를 입력한 후 Enter 키를 누르세요!
Ctrl + z 키를 입력한 후 Enter 키를 누르면 종료합니다!
hi~!
hi~!
^Z
*/
