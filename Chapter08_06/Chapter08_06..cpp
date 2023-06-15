#include <iostream>	//8.6 �Ҹ��� destructor, ������ ������ ����� ����� �� ȣ��Ǵ� �Լ�

using namespace std;

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}

	int getLength() { return m_length; }

	~IntArray()
	{
		delete[] m_arr;
	}
};
class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		:m_id(id_in)
	{
		cout << "Constructor" << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor" << m_id << endl;
	}
};
int main()
{
	Simple s1(0);
	Simple s2(1);

	return 0;
}