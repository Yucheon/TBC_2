#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : public Base
{
public:
	Derived()
	{

	}
};
int main()
{
	Base base;
	Derived derived;


	return 0;
}