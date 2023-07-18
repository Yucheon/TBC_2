#pragma once

//#include <string>
#include "Person.h"

class Teacher : public Person
{
private:
	//std::string m_name;

public:
	Teacher(const std::string& m_name)
		:Person(m_name)
	{

	}
};