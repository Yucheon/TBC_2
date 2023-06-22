#include <iostream>		//8.12 친구 함수와 클래스 friend

using namespace std;

class B;

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a);
};

class A
{
private:
	int m_value = 1;

	//friend void doSomething(A& a, B& b);

	friend void B::doSomething(A& a);
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}


int main()
{
	return 0;
}