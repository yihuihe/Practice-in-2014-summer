#include<stdio.h>
int main ()
{
	int s[19][19];
	int i,j,k;
	int a,b,c;
	int flag=0;
	for(i=0;i<19;i++)
		for(j=0;j<19;j++)
			scanf("%d",&s[i][j]);

	for(i=0;i<19;i++)
		for(j=0;j<19;j++)
		{
			if(s[i][j]!=0)
			{
				if(s[i][j]==s[i][j+1])
				{
					a=2; b=j+2;
					while(s[i][j]==s[i][b]  && a<=5)
					{
						a=a+1;
						b=b+1;
					}
					if(a==5)
					{printf("%d:(%d,%d)\n",s[i][j],i+1,j+1);
						flag==1;
					}
				}


				if(s[i][j]==s[i+1][j])
				{
					a=2; b=i+2;
					while(s[i][j]==s[b][j]  && a<=5)
					{
						a=a+1;
						b=b+1;
					}
					if(a==5)
					{	printf("%d:(%d,%d)\n",s[i][j],i+1,j+1);
						flag=1;
					}
				}


				if(s[i][j]==s[i+1][j+1])
				{
					a=2; b=j+2; c=i+2;
					while(s[i][j]==s[c][b]  && a<=5)
					{
						a=a+1;
						b=b+1;
						c=c+1;
					}
					if(a==5)
					{	printf("%d:(%d,%d)\n",s[i][j],i+1,j+1);
						flag=1;
					}
				}
			}
		}
		if(flag==0)
			printf("NO\n");
		else 
			printf("YES\n");

}