#include<stdio.h>
int panduan (int (*a)[10],int (*b)[10],int n);
int main ()
{
	int a[10][10],b[10][10];
	int n;
	int i,j;
	int p;
	while (scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);

		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&b[i][j]);

		for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
			printf("\n");
			
		}
		printf("\n");

		for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			printf("%d ",b[i][j]);
			printf("\n");
			
		}
		printf("\n");

		p=panduan(a,b,n);
		printf("%d\n",p);
	}
	return 0;
}

int panduan (int (*a)[10],int (*b)[10],int n)
{
	int angle=0;
	int i,j;
	for(angle=0,i=0;i<n;i++)
	{	for(j=0;j<n;j++)
		{
			if(angle==0)
			{
				if(a[i][j]==b[i][j])
					continue ;
				else
					angle=90;
			}

			if(angle==90)
			{
				if(a[i][j]==b[j][n-i-1])
					continue ;
				else
					angle=180;
			}

			if(angle==180)
					{
				if(a[i][j]==b[n-i-1][n-j-1])
					continue ;
				else
					angle=270;
			}

			if(angle==270)
					{
				if(a[i][j]==b[n-j-1][i])
					continue ;
				else
					angle=-1;
			}

			if(angle==-1)
				break;
		}
	}

		return angle;
}