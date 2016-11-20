#include<stdio.h>
int yueshu(int x,int y)
{
	int a ;
	if(y%x==0)
		return x;
	else
		while(y%x!=0)
	{
		a=y%x;
		y=x;
		x=a;
	}
		return x;
}
int main ()
{
	int m,n;
	int a,b,c;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m>n) return 0;
		else
		{
			a=yueshu(m,n);
			b=m/a;
			c=n/a;
			printf("%d/%d\n",b,c);
				
		}
	}
}