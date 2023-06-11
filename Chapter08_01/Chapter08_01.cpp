#include <iostream>	//8.1 객체지향 프로그래밍과 클래스, 데이터와 기능이 묶여있는 것이 오브젝트
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
	Friend JJ{"Jack Jack","Uptown",2,30,10};		//메모리를 차지하도록 만듬, instanciation, instance인스턴스 메모리에 자리가 있는 상태

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