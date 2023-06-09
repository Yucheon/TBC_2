#include <iostream>	//7.13 방어적 프로그래밍의 개념
using namespace std;

int main()
{
	string hello = "Hello, my name is Hack hack";

	cout << "input from 0to" << hello.size() - 1 << endl;

	while (true)
	{
		int ix;
		cin >> ix;
		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}

	return 0;
}