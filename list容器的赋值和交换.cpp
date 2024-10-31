#include<iostream>
using namespace std;
#include<list>

void PrintList(list<int>&L)
{
	for (list<int>::iterator li = L.begin(); li != L.end(); li++)
	{
		cout << *li << " ";
	}
	cout << endl;
}


int main()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	cout << "L1：";
	PrintList(L1);

	list<int>L2;
	L2 = L1;

	cout << "L2:";
	PrintList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());

	cout << "L3：";
	PrintList(L3);

	list<int>L4;
	L4.assign(10, 100);

	cout << "L4:";
	PrintList(L4);

	cout << "交换前：" << endl;
	PrintList(L3);
	PrintList(L4);

	cout << "交换后：" << endl;
	L3.swap(L4);
	PrintList(L3);
	PrintList(L4);
}