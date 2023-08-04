#pragma once
#include <assert.h>
#include <iostream>

template <typename T>		//템플릿 선언
class MyArray
{
private:
	int m_length;	//배열의 길이
	T* m_data;	//배열포인터		int에서 T로

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		m_data = new T[length];		//int에서 T로
		m_length = length;
	}

	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T& operator[](int index)		//int에서 T로
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength()
	{
		return m_length;
	}

	void print()
	{
		for (int i = 0; i < m_length; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};