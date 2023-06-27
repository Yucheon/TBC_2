#include <iostream> //9.1 산술 연산자 오버로딩 하기

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents=0)
	{ m_cents = cents; }
	int getCents()const { return m_cents; }
	int& getCents() { return m_cents; }

	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return (c1.getCents() + c2.getCents());
	}
};

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return(c1.getCents() + c2.getCents());
//}
int main()
{
	Cents cents1(6);
	Cents cents2(8);

	//Cents sum;

	//add(cents1, cents2, sum);

	cout << (cents1 + cents2+Cents(17)).getCents() << endl;

	return 0;
}