#include<iostream>
#include<set>
using namespace std;


class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

class compare
{
public:
	bool operator()(const Person& p1,const Person& p2)const
	{
		return p1.age < p2.age;
	}
};

int main()
{
	set<Person,compare>s1;

	Person p1("杨书润", 18);
	Person p2("郭安昕", 17);
	s1.insert(p1);
	s1.insert(p2);

	for (set<Person, compare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名：" << it->name << " 年龄：" << it->age << endl;
	}
}