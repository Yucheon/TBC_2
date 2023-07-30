#include <iostream>

using namespace std;


class PowerdDevice
{
public:
	int m_i;

	PowerdDevice(int power)
	{
		cout << "PoweredDevice" << power << '\n';
	}
};
int main()
{
	return 0;
}