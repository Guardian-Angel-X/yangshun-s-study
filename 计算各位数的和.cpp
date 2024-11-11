#include <iostream>
using namespace std;

//判断位数
int weishu(int a)
{
	int w =1;
	while(a>9)
	{
		w++;
		a /= 10;
	}
	return w;
} 

//提取出每一位数字
void tiqu(int * arr,int w,int a )
{
	for(int i = 0;i<w;i++)
	{
		arr[i] = a%10;
		a /= 10;
	}
} 

int main()
{
	int a;
	cin>>a;
	int w = weishu(a);
	
	//用数组存储每一位数字
	int arr[w];
	tiqu(arr,w,a);
	
	int sum = 0;
	for(int i = 0;i<w;i++)
	{
		sum += arr[i];
	}
	
	cout<<sum<<endl;
}
