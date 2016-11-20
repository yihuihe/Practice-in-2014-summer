#include<stdio.h>
int main ()
{
	int i,j,k;
	int n;
	double sum;
	while(scanf("%d",&n)!=EOF)
	{   
		sum=0;
		for(i=0;i<n/5;i++)
			for(j=0;j<n/3;j++)
				for(k=0;k<3*n;k=k+1)
				{
					sum=i*5+j*3+k/3.0;
					if(sum<=n)
					{
						if(i+j+k==100)
							printf("x=%d,y=%d,z=%d\n",i,j,k);
					}
				}
	}
	return 0;
}