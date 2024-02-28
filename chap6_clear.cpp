#include <iostream>
using namespace std;

int main()
{
	double sum = 0.0;
	double x;
	
	cout << "정수나 실수를 입력하세요. \n";
	cout << "합계를 끝내려면 정수나 실수 이외의 데이터를 입력하세요!\n";
	while(cin >> x) sum += x;
	cout << "마지막에 입력한 상수: " << x << endl;
	cout << "합계 = " << sum << endl;
	
	if(cin.fail() && !cin.bad())
	{
		cin.clear();
		while(!isspace(cin.get())) continue;
	 }
	cin >> x;
	cout << "추가 입력받아 x에 저장된 값: " << x << endl;
	
	return 0; 
}

/*
정수나 실수를 입력하세요.
합계를 끝내려면 정수나 실수 이외의 데이터를 입력하세요!
10
20.5
30.1
k
마지막에 입력한 상수: 0
합계 = 60.6
9.9
추가 입력받아 x에 저장된 값: 9.9
*/
