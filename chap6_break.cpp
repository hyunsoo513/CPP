#include <iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	switch (i)
	{
		case 1:
				cout << "First Number!" << endl;
		case 7:
				cout << "Lucky Number!" << endl;
				break;
		default:
				cout << "Bad Number!" << endl;
	}
	return 0;
}
/*
1
First Number!
Lucky Number!
*/
