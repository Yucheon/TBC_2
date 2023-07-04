#include <iostream>	//9.6 첨자 연산자 오버로딩 하기

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