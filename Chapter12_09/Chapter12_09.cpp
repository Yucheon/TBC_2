#include <iostream>	
#include <vector>	
#include <functional>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "i'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "i'm derived" << endl;
	}
};
int main()
{
	Derived d;
	Base& b = d;

	b.print();

	return 0;
}