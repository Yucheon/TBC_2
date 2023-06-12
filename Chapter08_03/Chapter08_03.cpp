#include <iostream> //8.3 »ý¼ºÀÚ Constructors

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int& num_in, const int& den_in)
	{
		m_numerator = num_in;
		m_denominator = den_in;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};
int main()
{
	Fraction frac(1,3);
	frac.print();
	
	return 0;
}