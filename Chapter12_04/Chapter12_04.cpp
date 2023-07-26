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
	int* m_array;			//�޸� �����Ҵ�

public:
	Derived(int length)			
	{
		m_array = new int[length];		//�迭 �����Ҵ�
	}

	virtual ~Derived() override
	{
		cout << "~Derived" << endl;
		delete[]m_array;				//�Ҹ��ڿ��� �޸𸮸� ������
	}
};

int main()
{
	//Derived derived(5);

	Derived *derived_new = new Derived(5); //�����Ҵ����� derived�� ����

	Base* base = derived_new;			   //�θ�Ŭ������ �����Ϳ� �Ҵ�

	delete base;


	return 0;
}