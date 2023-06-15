#include <iostream>	//8.5 위임 생성자

using namespace std;

class Student
{
private:
	int m_id;
	string m_name;

public:
	Student(const string& name_in)
		//:m_id(0), m_name(name_in)
		:Student(0, name_in)			//위임생성자
	{}

	Student(const int& id_in, const string& name_in)
	:m_id(id_in), m_name(name_in)
	{}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};
int main()
{
	Student st1(0, "Jack Jack");

	Student st2("Dash");
	return 0;
}