#include<stdio.h>
int main ()
{
	int s[20][20];
	int i,j,k,l,m,r;
	int a,b,c,d,e;
	int flag=0;
	int sum=0;
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&s[i][j]);

		for(i=1;i<n-1;i++)
		{	for(j=1;j<n-1;j++)
			{
				if(s[i][j]==0)
				{
					b=j-1;
					for(k=b;k>=0;k--)
					{
						if(s[i][k]==1)  {flag++;break;}
						
					}
					c=j+1;
					for(l=c;l<n;l++)
					{
						if(s[i][l]==1)  {flag++;break;}
						
					}
					d=i-1;
					for(m=d;m>=0;m--)
					{
						if(s[m][j]==1)  {flag++;break;}
						
					}
					e=i+1;
					for(r=e;r<n;r++)
					{
						if(s[r][j]==1)  {flag++;break;}
						
					}
					if(flag==4)
						sum++;
						flag=0;
				}
			
			}
		}
		printf("%d\n",sum);
		sum=0; 

		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				s[i][j]=0;
	}
}