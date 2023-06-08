//7.12 재귀적 함수 호출
#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	countDown(count - 1);
}

int main()
{
	countDown(5);

	return 0;
}