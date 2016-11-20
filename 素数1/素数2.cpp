#include<stdio.h>
#include<math.h>
int sushu(int x)
{
	int a,i,b;
	int flag=0;
	a=(int)sqrt(x);
	for(i=2;i<=a;i++)
	{
		if(x%i==0) flag=1;

	}
	if(flag==0)
	{	b=x%10;
		if(b==1)
			return 1;
		else
			return -1;
	}
	flag=0;
}
int main ()
{
	int n;
	int a;
	int i;
	int temp,flag=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=2;i<=n;i++)
		{
			temp=sushu(i);
			if(temp==1)
			{printf("%d\n",i);
			flag=1;
			}
	
		}
		if(flag==0)
			printf("-1\n");
		flag=0;


	}
}