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
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Print(v1);

	v1.pop_back();
	Print(v1);

	v1.insert(v1.begin(), 100);
	Print(v1);

	v1.insert(v1.begin(), 2, 1000);
	Print(v1);

	v1.erase(v1.begin());
	Print(v1);

	v1.erase(v1.begin(), v1.end());
	Print(v1);

}

int main()
{
	test01();
}