#include<iostream>
using namespace std;

int isprime(int n)
{
	for(int i = n-1;i>1;i--)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;
	int j = isprime(n);
	cout<<j<<endl;
}
