#include<iostream>
using namespace std;
#include<list>

void Judge(list<int>&L)
{
	if (L.empty())
	{
		cout << "ÈÝÆ÷Îª¿Õ" << endl;
	}
	else
	{
		cout << "ÈÝÆ÷²»Îª¿Õ" << endl;
	}
}

void Print(list<int>& L)
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
	list<int>L2;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	Judge(L1);
	Judge(L2);

	Print(L1);

	L1.resize(10, 100);
	Print(L1);

	L1.resize(3);
	Print(L1);
}