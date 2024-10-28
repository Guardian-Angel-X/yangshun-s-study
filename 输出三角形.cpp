#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i = 1;i<n+1;i++)
	{
		if(i % 2 == 0)
		{
			cout<<endl;
		}
		else
		{
			for(int j =0;j < ((n-1)/2)-((i-1)/2);j++)
			{
				cout<<" "; 
			}
			for(int j =0;j < i;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}
} 
