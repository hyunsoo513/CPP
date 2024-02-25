#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	double d = 357.89321;
	cout.setf(ios::fixed, ios::floatfield);
	// cout.setf(ios_base::fixed, ios_base::floatfield);
	
	cout.precision(3);		// 부동 소수점 -> 고정 소수점으로
	cout << d << endl;
	
	return 0; 
}

/*
357.893
*/
