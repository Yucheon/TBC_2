#include <iostream> 

using namespace std;

class Something
{
private:
	static int s_value;

public:
	static int getvalue()		//this�����͸� ����� �� ����
	{
		return s_value;
	}
};

int Something::s_value = 1024;

int main()
{
	cout << Something::getvalue() << endl;

	Something s1;
	cout << s1.getvalue() << endl;
	return 0;
}