#include<stdio.h>
#include<math.h>
#define PI 3.141592653
double taile(double x);
double jiecheng(double x);
int main ()
{
	double x;
	double a;
	while(scanf("%lf",&x)!=EOF)
	{
		//printf("%lf\n",x);
		a=taile(x/180.0*PI);
		printf("%f\n",a);
	}
	return  0;
}


double taile(double x)
{
	int i;
	double sum1=1.0,b,c,d;
	for(i=2;i<=10;i++)
	{
		b=2.0*i-2;
		c=pow(x,b);
	
		d=jiecheng(b);
		if(i%2==0)
			sum1=sum1-c/d;
		else
			sum1=sum1+c/d;
		
	}
	return sum1;
	
}

double jiecheng(double x)
{
	int  i;
	double sum=1.0;
	for(i=1;i<=x;i++)
		sum=sum*i;
	return sum;
}