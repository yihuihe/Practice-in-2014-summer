#include<stdio.h>
int main ()
{
	int a[20][20];
	int b[20][20];
	int x0,y0,x1,y1,x2,y2;
	int i,j,k;
	while(1)
	{
		scanf("%d%d",&x0,&y0);
			for(i=0;i<x0;i++)
				for(j=0;j<y0;j++)
					scanf("%d",&a[i][j]);
		
		
		scanf("%d%d",&x1,&y1);
			for(i=0;i<x1;i++)
				for(j=0;j<y1;j++)
					scanf("%d",&b[i][j]);

		scanf("%d%d",&x2,&y2);
		for(i=0;i<x0 &&i<x1;i++)
			for(j=0;j<y0 &&j<y1;j++)
				a[i+x2-1][j+y2-1]=b[i][j];

			for(i=0;i<x0;i++)
			{   for(j=0;j<y0;j++)
					printf("%d ",a[i][j]);
					printf("\n");
			}
			for(i=0;i<x0;i++)
				for(j=0;j<y0;j++)
					a[i][j]=0;
			for(i=0;i<x1;i++)
				for(j=0;j<y1;j++)
					b[i][j]=0;
	}
}