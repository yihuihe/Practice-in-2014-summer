#include<stdio.h>

int loop(int n);
int main ()
{
	int a,b;
	int c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		for(int i=a;i<=b;i++)
		{
			c=loop(i);
			if(c)
				printf("%d\n",i);
			
		}
	}
	return 0;

}

int loop(int n)
{
	int m=0,n1;
	n1=n;
	while (n!=0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if(n1==m)  return 1;
	else  return 0;
	
}