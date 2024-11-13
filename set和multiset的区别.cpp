#include<iostream>
using namespace std;
#include<set>

void judge(pair<set<int>::iterator,bool> ret)
{
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
}

void Print(multiset<int>& ms)
{
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	set<int>s1;
	pair<set<int>::iterator,bool> ret = s1.insert(10);
	judge(ret);

	pair<set<int>::iterator, bool> ret2 = s1.insert(10);
	judge(ret2);

	multiset<int>ms;

	ms.insert(10);
	ms.insert(10);
	ms.insert(20);
	ms.insert(20);
	ms.insert(30);
	ms.insert(30);

	Print(ms);
	
}