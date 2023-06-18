#include<iostream>		//8.9 Ŭ������ const

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something& st_in)		//���� ������, copy constructor
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	int getValue()const { return m_value; }	//�Լ��� const�� �Լ��� return�� ���� const��� �ǹ�
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