#include <iostream>

using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int& i_in=0)
		:m_i(i_in)
	{
		cout << "mother construction" << endl;
	}

};

class Child :public Mother
{
public:
	double m_d;

public:
	Child()
		: Mother(1), m_d(1.0f)		//Mother()�� ������ ����
	{
		cout << "Child construction" << endl;
	}
};

int main()
{
	Child c1;

	return 0;
}