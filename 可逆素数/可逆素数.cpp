#include<stdio.h>
#include<math.h>

int keni(int x)
{
	int i,j,k;
	int m=0,n;
	j=(int)sqrt(x);
	for(i=2;i<=j;i++)
	{
		if(x%i==0)  return 0;
	}
	n=x;
	while(n!=0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	k=(int)sqrt(m);
	for(i=2;i<=k;i++)
	{
		if(m%i==0)  return 0;
	}
   return 1;
	
}

int main ()
{
	int p;
	int flag=0;
	while(scanf("%d",&p)!=EOF)
	{
		flag=keni(p);
		if(flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}	