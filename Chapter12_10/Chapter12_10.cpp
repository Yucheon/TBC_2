#include <iostream>
#include <string>

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

class Derived1 :public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "i'm derived" << endl;
	}
};

class  Derived2 :public Base
{
public:
	string m_name = "dr.two";

	virtual void print()override
	{
		cout << "i'm derived" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base* base = &d1;

	auto* vase_to_d1 = dynamic_cast<Derived1*>(base);
}