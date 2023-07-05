#include <iostream>		//9.7 ��ȣ ������ �����ε��� �Լ� ��ü

using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) { return (m_counter += i); }
};

int main()
{
	Accumulator acc;
	cout << acc(100) << endl;
	cout << acc(200) << endl;

	return 0;
}