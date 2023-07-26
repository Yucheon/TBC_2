#include <iostream>	

using namespace std;

class A
{
public:
	virtual void print(int x) { cout << "A" << endl; }
};

class B :public A
{
public:
	void print(short x)override { cout << "B" << endl; }
};

