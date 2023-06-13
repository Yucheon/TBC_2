#include <iostream>	//8.4 생성자 멤버 초기화 목록

using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		:m_b(m_b_in)
	{

	}
};
class Something
{
private:
	int m_i;
	double m_d;
	char m_c;
	B m_b;

public:
	Something()
		: m_i(1), m_d(3.14), m_c('a'),m_b(m_i+5)
	{

	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
	}
};
int main()
{
	Something som;
	som.print();

	return 0;
}