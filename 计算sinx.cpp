#include<iostream>
#include<cmath>
using namespace std;

int jiecheng(int n)
{
	int answer = 1;
	for(int i =1;i<n+1;i++)
	{
		answer *= i;
	}
	return answer;
}

void sinh(int n)
{
	double sinx = (exp(n)-1/(exp(n)))/2;
	cout<<sinx<<endl;
}

int main()
{
	int n;
	cin>>n;
	sinh(n);
	
}
