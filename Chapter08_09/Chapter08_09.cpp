#include<iostream>		//8.9 클래스와 const

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something& st_in)		//복사 생성자, copy constructor
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	int getValue()const { return m_value; }	//함수의 const는 함수의 return의 값이 const라는 의미
};

void print(const Something &some)
{
	cout << some.m_value << endl;
}

int main()
{
	Something something;


	cout << something.getValue() << endl;

	return 0;
}