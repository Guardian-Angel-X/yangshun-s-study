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
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
	}

	if (empty(v2))
	{
		cout << "v2Ϊ��" << endl;
	}
	else
	{
		cout << "v2��Ϊ��" << endl;
	}

	vector<int>v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}

	//��ȡv3�������ʹ�С
	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;

	//���¸�ֵv3�Ĵ�С
	v3.resize(3);
	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;
}

int main()
{
	test01();
}