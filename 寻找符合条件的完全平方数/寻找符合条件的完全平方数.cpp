#include<stdio.h>
#include<math.h>
int main ()
{
long int  a,b,c;
for (a=0;a<100000;a++)
{
	b=sqrt(a+100);
	c=sqrt(a+268);
	if(b*b==a+100&&c*c==a+268)
		printf("%ld\n",a);
}
return 0;
}
