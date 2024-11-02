#include<iostream>
#include<list>
using namespace std;

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

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	Print(L1);

	L1.pop_back();
	Print(L1);

	L1.pop_front();
	Print(L1);

	list<int>L2;
	L2.insert(L2.begin(), L1.begin(), L1.end());
	Print(L2);

	list<int>::iterator li = L2.begin();
	li++;
	li++;
	L2.insert(li, 3, 1000);
	Print(L2);

	L2.remove(1000);
	Print(L2);

}