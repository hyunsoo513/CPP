#include <iostream>
using namespace std;
#include <ctype.h>
#include <cstring>
int main()
{
	const int SIZE = 80;			// SIZE�� 80�� ������ ����� ����
	char data;
	int input;
	
	cout << "�� ���� ������ �Է�: ";
	cin >> data;
	cout << data << endl;
	cin.ignore(SIZE, '\n');			// ���๮�ڸ� ���� ������ 80���� ���ڸ� ������.

	cout << "�� ���� int ���� �Է�: ";
	cin >> input;
	cout << input << endl;
	cin.ignore(SIZE, '\n');

	cout << "�� ���� ������ �Է�: ";
	cin.get(data);					// Ű����κ��� �� ���� ���ڸ� �޾Ƶ���
	cout.put(data);					// �޾Ƶ��� ���ڸ� ȭ�鿡 ��� 
	cout.put('\n'); 				// ���๮�ڸ� ȭ�鿡 ���
	
	cin.ignore(SIZE, '\n');
	cout << toupper(data) << "  "; 	// �빮�� �ڵ�(������)�� ��ȯ
//	cout << char(toupper(data)) << "  ";
	cout << tolower(data) << endl;	// �ҹ��� �ڵ�(������)�� ��ȯ
//	cout << char(tolower(data)) << "  ";
	cin.clear();					// �Է� ��Ʈ�� ���� ����
	
	return 0; 
}

/*
�� ���� ������ �Է�: v
v
�� ���� int ���� �Է�: 3
3
�� ���� ������ �Է�: s
s
83  115
*/
