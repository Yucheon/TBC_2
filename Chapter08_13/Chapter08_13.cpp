#include <iostream> //8.13 익명 객체, 이름 없이 객체 사용하기

using namespace std;

class cents
{
public:

	int m_cents;

	cents(int cents)
		:m_cents(cents)
	{

	}

	int getCents()const { return m_cents; }
};

cents add(const cents& cent1, const cents& cent2)
{
	return cents(cent1.getCents() + cent2.getCents());
}

class A
{
public:

	int m_value;

	A(const int& input)
		:m_value(input)
	{
		cout << "Constructor" << endl;
	}
	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	A a(1);
	a.print();

	A(1).print();		//R value처럼 사용 재사용될 수 없음

	cout<<add(cents(2), cents(4)).getCents() << endl;
	return 0;
}