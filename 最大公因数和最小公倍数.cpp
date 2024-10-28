#include<iostream>
using namespace std;

//求最小公倍数
//1.辗转相除法
 int zhan_zhuan_fun1(int a,int b)
 {
 	while(a % b != 0)
 		{
 			int c = a % b;
 			a = b;
 			b = c;
		}
		return b;
 }
 
 //2.更相减损法
 int geng_xiang_fun1(int a, int b)
 {
 	while(a != b)
 	{
 		if(a > b)
 		{
 			int c = a-b;
 			a = b;
 			b = c;
		}
		if(a < b)
		{
			int c = b-a;
			b = a;
			a = c;
		}
	}
	return a;
 } 

//3.分解质因数法
void zhi_yin_fun1(int * arr,int n)
{
	int i = 2;
	int j = 0;
	while(n != 1)
	{
		if(n % i == 0)
		{
			arr[j] = i;
			n /= i;
			j++;
		}
		else
		{
			i++;
		}
	}
}

int zhi_yin_fun2(int a ,int b)
{
	int arr1[100] = {0};
	int arr2[100] = {0};
	
	zhi_yin_fun1(arr1,a);
	zhi_yin_fun1(arr2,b);
	
	int i = 0,j = 0,max = 1;
	while(arr1[i] != 0 && arr2[j] != 0)
	{
		if(arr1[i] == arr2[j])
		{
			max *= arr1[i];
			i++;
			j++;
		}
		else if(arr1[i] > arr2[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	return max;
}


//4.短除法 
void duan_chu_fun1(int * arr,int n)
{
	int j = 0;
	for(int i = 1;i < n+1;i++)
	{
		if(n % i == 0)
		{
			arr[j] = i;
			j++;
		}
	}
} 

int duan_chu_fun2(int a,int b)
{
	int arr_a[100] = {0};
	int arr_b[100] = {0};
	
	duan_chu_fun1(arr_a,a);
	duan_chu_fun1(arr_b,b);
	
	int i = 0,j = 0,max = 0;
	while(arr_a[i] != 0 && arr_b[j] != 0)
	{
		if(arr_a[i] == arr_b[j])
		{
			max = arr_a[i];
			i++;
			j++;
		}
		else if(arr_a[i] > arr_b[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	return max;
}

//5.穷举法 
int qiong_ju_fun1(int a,int b)
{
	int t = a;
	while(true)
	{
		if(a % t ==0 && b % t ==0)
		{
			break;
		}
		t--;
	}
	return t;
}

//求最小公倍数
 int fun(int a,int b,int ret)
 {
 	int gong = 0;
 	int g1 = a / ret;
 	int g2 = b / ret;
 	if(g1 > g2)
 	{
 		if(g1 % g2 != 0)
 		{
 			gong = ret * g1 * g2; 
		}
		else
		{
			gong = ret * g1;
		}
	}
	else
	{
		if(g2 % g1 != 0)
		{
			gong = ret * g1 * g2;
		}
		else
		{
			gong = ret * g2;
		}
	}
	return gong;
 }

 
int main()
{
	int a,b;
	cin>>a>>b;
	
	//最大公因数 
	int ret = zhan_zhuan_fun1(a,b);
	//int ret = geng_xiang_fun1(a,b);
	//int ret = zhi_yin_fun2(a,b);
	//int ret = duan_chu_fun2(a,b);
	//int ret = qiong_ju_fun1(a,b);
	
	//最小公倍数 
	int gong = fun(a,b,ret);
	
	cout<<ret<<" "<<gong<<endl;
	
	
	
	return 0;
}
