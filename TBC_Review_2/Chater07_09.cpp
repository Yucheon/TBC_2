//7.9 함수 포인터
#include <iostream>
#include <array>
using namespace std;

int func()		//함수도 포인터
{

	return 5;
}

int goo()
{
	return 10;
}

void printNumbers(const array<int,10> &my_array)
{
	for (auto ele : my_array)
	{
		if (ele % 2 == 0)cout << ele;
	}
	cout << endl;
}

int main()
{
	//cout << func << endl;		//따라서 함수가 어느 메모리주소에 있는지 반환

	//int(*fcnptr)() = func;

	//cout << fcnptr() << endl;

	//fcnptr = goo;				//함수 포인터에 다른 함수의 주소를 넣음

	//cout << fcnptr() << endl;

	std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_array);

	return 0;
}