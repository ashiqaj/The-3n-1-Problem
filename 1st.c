#include<stdio.h>
int num(int n)
{
	int c=0;
	while(1)
	{
		if(n==1)
		{
			c++;
			break;
		}
		else if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=n*3+1;
		}
		c++;
	
	}
	return c;
}
int main()
{
	int n,s;
	scanf("%d %d",&n,&s);
	int max=0;
	for(int i=n;i<=s;i++)
	{
		if(num(i)>=max)
			max=num(i);
	}
	printf("\n%d %d %d",n,s,max);
	return 0;
}