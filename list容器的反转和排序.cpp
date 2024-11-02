#include<iostream>
#include<list>

using namespace std;

void Print(list<int>&L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " " ;
	}
	cout << endl;
}

int main()
{
	list<int>L;

	L.push_back(50);
	L.push_back(30);
	L.push_back(40);
	L.push_back(20);
	L.push_back(10);

	Print(L);

	L.reverse();

	Print(L);

	L.sort();
	Print(L);
}