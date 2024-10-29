#include<iostream>
#include<vector>
using namespace std;

//´æ
void Push(vector<int>& v)
{
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
}

//È¡
void Print(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	Push(v1);
	Print(v1);

	cout << v1.front() << endl;
	cout << v1.back() << endl;

}

int main()
{
	test01();
}