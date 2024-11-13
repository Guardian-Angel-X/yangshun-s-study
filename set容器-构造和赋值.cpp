#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int> &s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	PrintSet(s1);

	set<int> s2(s1);
	PrintSet(s2);

	set<int> s3;
	s3 = s2;
	PrintSet(s3);
}