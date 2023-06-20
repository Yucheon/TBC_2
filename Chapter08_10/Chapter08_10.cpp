#include <iostream>		//8.10 정적 멤버 변수

using namespace std;

class Something
{
public:
	static int s_value;

};

int Something::s_value = 1;		//헤더말고 cpp파일에 둘것

int main()
{
	cout << Something::s_value << endl;
	cout << &Something::s_value << endl;

	Something st1;
	Something st2;

	st1.s_value = 2;

	cout << st1.s_value<<&st1.s_value <<endl;
	cout << st2.s_value << &st2.s_value << endl;

	return 0;
}