#include<stdio.h>
float f(int n,int x);
int main()
{
	int n,x;
	printf("请输入勒让德多项式的阶数n和自变量x:\n");
	scanf("%d%d",&n,&x);
	printf("函数值为:%f",f(n,x));
	return 0;
}
float f(int n,int x)
{
	float c;
	if(n==0)
	{
		c=1;
	}
	else if(n==1)
	{
		c=x;
	}
	else
	{
		c=((2*n-1)*x-f(n-1,x)-(n-1)*f(n-2,x))/n;
	}
	return c;
} 
