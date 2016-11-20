#include<stdio.h>
int main ()
{
	int n,i,j;
	int temp;
	int a[100],b[100];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	
		for(j=0;j<n;j++)
		b[j]=a[j];



		for(i=0;i<n;i++)
		{	for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(a[i]==a[j])
					a[j]=987654321;
			}
		}


		for(i=0;i<n;i++)
		{	for(j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					if(i!=n-1) printf("%d ",j+1);
					else printf("%d",j+1);
				}
			}
		}
		printf("\n");
			for(i=0;i<n;i++)
			{	a[i]=0;b[i]=0;}

	}


}