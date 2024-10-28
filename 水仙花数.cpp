#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a,b,c,n;
	for(int i = 100;i<N+1;i++)
	{
		a = i%10;
		b = (i/10)%10;
		c = i/100;
		
		n = (a*a*a)+(b*b*b)+(c*c*c);
		if(n == i)
		{
			cout<<i<<endl;
		}
	}
}
