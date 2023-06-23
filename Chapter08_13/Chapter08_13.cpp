#include <iostream> //8.13 �͸� ��ü, �̸� ���� ��ü ����ϱ�

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

	A(1).print();		//R valueó�� ��� ����� �� ����

	cout<<add(cents(2), cents(4)).getCents() << endl;
	return 0;
}