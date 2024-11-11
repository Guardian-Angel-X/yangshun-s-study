#include<stdio.h>



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

//合并整数 
int comb(int a,int b)
{
	int w1 = weishu(a);
	int w2 = weishu(b);
	
	int  arr[w1+w2];
	for(int i = w1+w2;i>0;i--)
	{
		if(i % 2 == 1)
		{
			arr[i-1] = b % 10;
			b /=10;
		}
		else
		{
			arr[i-1] = a % 10;
			a /=10;
		}
	}
	
	int num_comb = 0;
	int pow = 1;
	for(int i = 0;i<w1+w2;i++)
	{
		num_comb += arr[i] * pow;
		pow *= 10;
	}
	
	return num_comb;
}

int main()
{
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	
	int num_comb = comb(a,b);
	printf("%d",num_comb);
	
	return 0;
	
}
