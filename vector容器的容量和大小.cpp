#include<iostream>
#include<vector>
using namespace std;

void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}

	if (empty(v1))
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
	}

	if (empty(v2))
	{
		cout << "v2为空" << endl;
	}
	else
	{
		cout << "v2不为空" << endl;
	}

	vector<int>v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}

	//获取v3的容量和大小
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;

	//重新赋值v3的大小
	v3.resize(3);
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;
}

int main()
{
	test01();
}