#include<stdio.h>
#include<math.h>

int main ()
{
	double x,p;
	int n,i;
	while (scanf("%lf%d",&x,&n)!=EOF)
	{
		p=x;
		for(i=0;i<n;i++)
		p=p*2/3+x/(3*p*p);
		printf("%lf\n",p);


	}
}