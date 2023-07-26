#include <iostream>

using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived :public Base
{
private:
	int* m_array;			//메모리 동적할당

public:
	Derived(int length)			
	{
		m_array = new int[length];		//배열 동적할당
	}

	virtual ~Derived() override
	{
		cout << "~Derived" << endl;
		delete[]m_array;				//소멸자에서 메모리를 지워줌
	}
};

int main()
{
	//Derived derived(5);

	Derived *derived_new = new Derived(5); //동적할당으로 derived를 생성

	Base* base = derived_new;			   //부모클래스의 포인터에 할당

	delete base;


	return 0;
}