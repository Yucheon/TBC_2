#include <iostream>  //9.4 비교 연산자 오버로딩 하기

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents()const { return m_cents; }
	int& getCetns() { return m_cents; }
	
	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend std::ostream& operator <<(std::ostream out, const Cents c)
	{
		out << c.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);


	return 0;
}