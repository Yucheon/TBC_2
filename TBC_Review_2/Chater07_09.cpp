//7.9 �Լ� ������
#include <iostream>
#include <array>
using namespace std;

int func()		//�Լ��� ������
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
	//cout << func << endl;		//���� �Լ��� ��� �޸��ּҿ� �ִ��� ��ȯ

	//int(*fcnptr)() = func;

	//cout << fcnptr() << endl;

	//fcnptr = goo;				//�Լ� �����Ϳ� �ٸ� �Լ��� �ּҸ� ����

	//cout << fcnptr() << endl;

	std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_array);

	return 0;
}