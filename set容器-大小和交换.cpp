#include<iostream>
using namespace std;
#include<set>

void Print(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	set<int> s1;
	if (s1.empty())
	{
		cout << "set容器为空" << endl;
	}
	else
	{
		cout << "set容器不为空" << endl;
	}

	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);

	cout << "s1的大小为：" << s1.size() << endl;

	set<int>s2;

	cout << "交换前：" << endl;
	Print(s1);
	Print(s2);

	cout << "交换后：" << endl;
	s1.swap(s2);
	Print(s1);
	Print(s2);

}