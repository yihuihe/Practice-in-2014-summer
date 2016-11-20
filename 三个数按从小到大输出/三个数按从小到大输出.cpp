#include<stdio.h>
int main ()
{
	int a[4]={0};
	int b,c,d;
	for(int i=0;i<3;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<3;j++)
		for(int k=0;k<2-j;k++)
			if(a[k]>a[k+1])
			{
				b=a[k];
				a[k]=a[k+1];
				a[k+1]=b;
			}
	for(int v=0;v<3;v++)
		printf("%d ",a[v]);
	printf("\n");
	return 0;

}

