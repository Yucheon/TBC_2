#include <iostream>	//9.6 ÷�� ������ �����ε� �ϱ�

using namespace std;

class IntList
{
private:
	int m_list[10];

public:
	int& operator [] (const int index)
	{
		return m_list[index];
}
};

int main()
{
	IntList my_list;
	my_list[3] = 10;
	cout << my_list[3] << endl;
	return 0;
}