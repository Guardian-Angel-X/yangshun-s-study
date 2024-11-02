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
		cout << "姓名：" << it->name << " " << "年龄：" << it->age << " 身高：" << it->length << endl;
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
	Person p1("刘备",35,175);
	Person p2("曹操",45,180);
	Person p3("孙权",40,170);
	Person p4("赵云",25,190);
	Person p5("关羽",35,160);
	Person p6("张飞",35,200);

	list<Person>L;

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	Print(L);
	cout << "排序后:" << endl;

	//按照先年龄升序排列，再身高降序排列
	L.sort(Sort);
	Print(L);
}