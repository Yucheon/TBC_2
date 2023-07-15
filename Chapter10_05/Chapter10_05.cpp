#include <iostream>			//10.5 ���� ����
#include<vector>
#include <string>

using namespace std;

class Doctor;		//Patient�� Doctor�� �𸣹Ƿ� ���� ����(���ΰ� �˾ƾ��ϱ� ����) ������ ����������� ������ �� ����. Body�� �и��Ͽ� ������

class Patient		//Patient Ŭ���� ����
{
private:
	string m_name;					//��� ���� ����
	vector<Doctor*> m_doctor;		//ȯ�ڰ� ������ �ǻ��� �̸��� ���
public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor* New_doctor)//ȣ��� 
	{
		m_doctor.push_back(New_doctor);//vector�̹Ƿ� push_back�� �̿��Ͽ� ����
	}

	void meetDoctor();		//Doctor Ŭ���� �Ʒ��� �ٵ� ����
	//{
	//	for (auto ele : m_doctor)
	//	{
	//		cout << "Meet doctor : " << ele->m_name << endl;	//Doctor�� ���� friend�� ����
	//	}
	//}
	friend class Doctor;				//friend�� �����Ͽ� Doctor�� Private����� ���� �����ϰ� ��
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patient;
public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient* New_patient)
	{
		m_patient.push_back(New_patient);
	}

	void meetPatient()
	{
		for (auto ele : m_patient)
		{
			cout << "Meet Patient : " << ele->m_name << endl;	//Patient�� ���� friend�� ����
		}
	}

	friend class Patient;				//friend�� �����Ͽ� Patient�� Private����� ���� �����ϰ� ��
};

void Patient::meetDoctor()				//���漱������ class Doctor�� ���־����� m_doctor�� �� �������Ƿ� �ٵ� ������
{
	for (auto ele : m_doctor)
	{
		cout << "Meet doctor : " << ele->m_name << endl;	//Doctor�� ���� friend�� ����
	}
}


int main()
{
	Patient* p1 = new Patient("Jack Jack");		//Patient Ŭ������ ������ ���� p1�� new�����ڸ� ����Ͽ� �����Ҵ����� �ʱ� ����� "Jack Jack"���� �ϴ� �ν��Ͻ��� �ο���
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Dash");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);						//p1�� ���� d1�� ���� ������ �����̹Ƿ� ->�����ڷ� ����
	d1->addPatient(p1);						//p1�� ���� d1�� �������Ƿ� �̴� �� d1�� p1�� ���� �� (���常 �ݴ�)

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	p1->meetDoctor();						//p1�� � �ǻ縦 �������� ���

	d1->meetPatient();						//d1�� � ȯ�ڸ� �������� ���

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}