#include<iostream> //8.2 캡슐화, 접근 지정자, 접근 함수
#include <string>
#include <vector>
using namespace std;

struct Date
{
	int m_month;
	int m_day;
	int m_year;

	const int& getDay()
	{
		return m_day;
	}

	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today{ 8,4,1025 };



	return 0;
}