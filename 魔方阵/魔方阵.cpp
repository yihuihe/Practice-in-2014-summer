#include<stdio.h>
#define  N  2*n-1
int main ()
{
	int n;
	int i,j,k;
	int temp;
	while (scanf("%d",&n)!=EOF)
	{
		for(i=1;i<n;i++)
		{	
			temp=1;
			for(j=1;j<=N;j++)
			{
				if(j<i) printf("%d",temp++);
				else if(j>N-i+1) printf("%d",--temp);
				else  printf("%d",temp);
			}
			printf("\n");
		}
		for(i=n;i>=1;i--)
		{	
			temp=1;
			for(j=1;j<=N;j++)
			{
				if(j<i) printf("%d",temp++);
				else if(j>N-i+1) printf("%d",--temp);
				else  printf("%d",temp);
			}
			printf("\n");
		}

		
	}
}
