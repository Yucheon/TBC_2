#include <iostream>		//9.7 괄호 연산자 오버로딩과 함수 객체

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