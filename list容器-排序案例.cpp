#include<iostream>
#include<list>

using namespace std;

class Person
{
public:
	Person(string name, int age, int length)
	{
		this->name = name;
		this->age = age;
		this->length = length;
	}
	string name;
	int age, length;
};

void Print(list<Person>& L)
{
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << it->name << " " << "���䣺" << it->age << " ��ߣ�" << it->length << endl;
	}
}

bool Sort(Person &p1,Person &p2)
{
	if (p1.age == p2.age)
	{
		return p1.length > p2.length;
	}
	return p1.age < p2.age;
}

int main()
{
	Person p1("����",35,175);
	Person p2("�ܲ�",45,180);
	Person p3("��Ȩ",40,170);
	Person p4("����",25,190);
	Person p5("����",35,160);
	Person p6("�ŷ�",35,200);

	list<Person>L;

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	Print(L);
	cout << "�����:" << endl;

	//�����������������У�����߽�������
	L.sort(Sort);
	Print(L);
}