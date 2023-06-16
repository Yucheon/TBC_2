#include <iostream> //8.7 this 포인터와 연쇄 호출

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		this->setID(id);

		cout << this << endl;
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
};

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		:
		m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this;}
	Calc& sub(int value) { m_value -= value; return *this;}
	Calc& mult(int value) { m_value *= value; return *this;}

	void print()
	{
		cout << m_value << endl;
	}
};
int main()
{
	Simple s1(1), s2(2);

	Calc cal(10);

	cal.add(10);
	cal.sub(1);
	cal.mult(3);

	cal.add(10).sub(3).mult(2).print();

	cal.print();
	return 0;
}