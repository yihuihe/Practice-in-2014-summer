#include<stdio.h>
#include <math.h>
int main ()
{
	int n;
	int s,flag=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<=1)
			printf("no\n");
		else
		{
			s=(int)sqrt(n);
			for(int i=2;i<=s;i++)
			{
				if(n%i==0)
				{
					printf("no\n");
					flag=1;
					break;
				}
			}
			if(!flag)
			printf("yes\n");
			flag=0;
		}
	}
	return 0;

}