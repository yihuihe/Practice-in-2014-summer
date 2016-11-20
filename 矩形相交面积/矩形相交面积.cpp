#include<stdio.h>
int main ()
{
	 int a[10];
	 int b,c;
	 while (scanf("%d",&a)!=EOF)
	 {
		if(a[2]>a[4]&&a[3]>a[5])
		{
			b=a[2]-a[4];
			c=a[3]-a[5];
			printf("%d\n",b*c);
		}
	 }
	 return 0;
}