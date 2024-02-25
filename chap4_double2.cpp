#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	double d = 1234.56789;
	cout << d << endl;													// 1234.57�� �ݿø��� ��(�ٻ�ġ) ���
	cout << setw(13) << setiosflags(ios::scientific) << d << endl;		// ��������(1.234568e+003)�� ���
//	cout << setw(8) << setiosflags(ios::scientific) << d << endl;		// �����ϰ� ���
	cout.setf(ios_base::fixed, ios_base::floatfield);					// �ε� �Ҽ��� �Ǽ��� ���� �Ҽ��� �ڸ� ���� ������ ���·� ǥ���ϱ�
	cout.precision(5);													// �Ҽ��� ���� ���е�(�ڸ� ��) ����
	cout << d << endl;
	
	return 0;
}

/*
1234.57
1.234568e+003
1234.56789
*/
