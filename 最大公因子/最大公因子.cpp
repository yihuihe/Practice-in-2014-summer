#include<stdio.h>

/*int gcd(int a,int b)
{
	if (a%b == 0)
	{
		return b;
	}
	if (b%a == 0)
	{
		return a;
	}

	return gcd(a,b%a );
}*/

int gcd(int x,int y)
{
	if(x > y && x%y==0)
	{
		return y;
	}
	else if(y > x )
	{
		return gcd(y,x);
	}
	else

	return gcd(y,x%y);
}

int main ()
{
	int m,n;
	int temp;
	while (scanf("%d%d",&m,&n)!=EOF)
	{
	
		temp=gcd(m,n);
		printf("%d\n",temp);

	}
}