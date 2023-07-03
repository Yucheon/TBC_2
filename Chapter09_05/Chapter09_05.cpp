#include <iostream>	//9.5 증감 연산자 오버로딩 하기

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) :m_digit(digit) {}

	Digit& operator ++()
	{
		++m_digit;
		return *this;
	}

	Digit& operator ++(int)
	{
		Digit temp(m_digit);

		++(*this);

		return temp;
	}

	friend ostream& operator<<(ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl;

	return 0;
}