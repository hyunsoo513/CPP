#include <iostream>
using namespace std;

int main()
{
	double sum = 0.0;
	double x;
	
	cout << "������ �Ǽ��� �Է��ϼ���. \n";
	cout << "�հ踦 �������� ������ �Ǽ� �̿��� �����͸� �Է��ϼ���!\n";
	while(cin >> x) sum += x;
	cout << "�������� �Է��� ���: " << x << endl;
	cout << "�հ� = " << sum << endl;
	
	if(cin.fail() && !cin.bad())
	{
		cin.clear();
		while(!isspace(cin.get())) continue;
	 }
	cin >> x;
	cout << "�߰� �Է¹޾� x�� ����� ��: " << x << endl;
	
	return 0; 
}

/*
������ �Ǽ��� �Է��ϼ���.
�հ踦 �������� ������ �Ǽ� �̿��� �����͸� �Է��ϼ���!
10
20.5
30.1
k
�������� �Է��� ���: 0
�հ� = 60.6
9.9
�߰� �Է¹޾� x�� ����� ��: 9.9
*/
