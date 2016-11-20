#include<stdio.h>
int main ()
{
	int n;
	int a[12];
	int max,temp;
	while(scanf("%d",&a[0])!=EOF)
	{ 
		for(int j=1;j<10;j++)
			scanf("%d",&a[j]);
		max=a[0];
		for(int i=1;i<10;i++)
		{
			if(a[i]>max)
			{
				temp=max;
				max=a[i];
				a[i]=temp;
			}
		}
		printf("max=%d\n",max);
	}
	return 0;
}