#include<iostream>
#include<vector>
using namespace std;

void Print(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}

	//v1的容量和大小
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;

	v1.resize(3);
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;

	vector<int>(v1).swap(v1);
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;

	vector<int>v2;
	vector<int>v3;

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	for (int i = 10; i > 0; i--)
	{
		v3.push_back(i);
	}
	Print(v2);
	Print(v3);

	v2.swap(v3);

	Print(v2);
	Print(v3);

}

int main()
{
	test01();
}