#include<stdio.h>
int main ()
{
	int n;
	int a,b,c;
	int sum;
	while (scanf("%d",&n)!=EOF)
	{
		if(n>999||n<100)  return 0;
		for(int i=100;i<=n;i++)
		{
			a=i/100;
			b=i/10-a*10;
			c=i%10;
			sum=a*a*a+b*b*b+c*c*c;
			if(sum==i)
			printf("%d\n",i);
		}
		

	}
	return 0;
}