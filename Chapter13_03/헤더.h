#pragma once
#include <assert.h>
#include <iostream>


template<typename T, unsigned int T_SIZE>	//T_SIZE�� ������ Ÿ�ӿ� ������ ��
class MyArray
{
private:
	//int m_length;		//m_length�� ��ü�ϴ� ������ ���ø��� �Ķ���ͷ� T_SIZE�� �����
	T* m_data;

public:

	MyArray()
	{
		m_data = new T[T_SIZE]; //T_SIZE�� ������ Ÿ�ӿ� �����Ǿ� �����Ƿ� �����Ҵ��� �� ����
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}
	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};