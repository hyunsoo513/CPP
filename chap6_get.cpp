#include <iostream>
using namespace std;

int main()
{
	char ch;
	
	cout << "���� ���ڸ� �Է��� �� Enter Ű�� ��������!\n";
	cout << "Ctrl + z Ű�� �Է��� �� Enter Ű�� ������ �����մϴ�!\n";
	while((ch = cin.get()) != EOF)
		cout << ch;
	
	return 0;
}

/*
���� ���ڸ� �Է��� �� Enter Ű�� ��������!
Ctrl + z Ű�� �Է��� �� Enter Ű�� ������ �����մϴ�!
hi~!
hi~!
^Z
*/
