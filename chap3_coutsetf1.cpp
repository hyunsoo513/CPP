#include <iostream>
using namespace std;

int main()
{
	int i = 19;
	
	cout << i << "\n";
	cout.setf(ios::showpos);		// + ��ȣ�� ���� ���
	cout << i << endl;
	cout.setf(ios::showbase);		// 16������ 0x, 8������ 0�� ����
	cout << oct << i << endl;
//	cout << hex << 19 << "\n";
	cout.setf(ios::uppercase);		// 16���� ǥ�ÿ� ���Ǵ� �����ڸ� �빮�ڷ� ǥ��
	cout << hex << 19 << "\n";
	
	return 0; 
}

/*
19
+19
023
0X13
*/
