#include <iostream>	//8.1 ��ü���� ���α׷��ְ� Ŭ����, �����Ϳ� ����� �����ִ� ���� ������Ʈ
#include <string>
#include <vector>

using namespace std;

class Friend
{
public: 
	string m_name;
	string address;
	int age;
	double height;
	double weight;

	void print()
	{
		cout << m_name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;

}
int main()
{
	Friend JJ{"Jack Jack","Uptown",2,30,10};		//�޸𸮸� �����ϵ��� ����, instanciation, instance�ν��Ͻ� �޸𸮿� �ڸ��� �ִ� ����

	print(JJ.m_name, JJ.address, JJ.age, JJ.height, JJ.weight);

	JJ.print();

	//vector<string> name_vec;
	//vector<string> addr_vec;
	//vector<int>	age_vec;
	//vector<double>height_vec;
	//vector<double>weight_vec;

	vector<Friend> my_friends;
	my_friends.resize(2);

	my_friends[0].print();
	my_friends[1].print();

	for (auto& ele : my_friends)
		ele.print();

	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);


	return 0;
}