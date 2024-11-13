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
	set<int>s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(50);

	set<int>s2(s1);

	Print(s1);

	s1.erase(s1.begin());
	Print(s1);

	s1.erase(20);
	Print(s1);

	s1.erase(s1.begin(), s1.end());
	s2.clear();

	Print(s1);
	Print(s2);
}