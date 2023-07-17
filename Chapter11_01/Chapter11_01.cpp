#include <iostream>
using namespace std;

class Mother
{
//private:
private:		//자식클래스에서 사용은 가능하되 밖에서는 사용할 수 없도록 함
	int m_i;

public:

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}

};

class Child :public Mother
{
private:
	double m_d;

public:

	Child(const int&i_in, const double& d_in)
		//:m_i(i_in), m_d(d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
		cout << "Child_constrouctor" << endl;
	}

	void setValue(const int& m_i, const double& d_in)
	{
		Mother::setValue(m_i);
		m_d = d_in;
	}


	void setValue(const double& d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

int main()
{
	Mother mother;

	mother.setValue(1204);
	cout << mother.getValue() << endl;

	Child child(1024,222);
	child.setValue(126);

	cout << child.getValue() << endl;
	return 0;
}