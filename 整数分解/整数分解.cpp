#include<stdio.h>
int main ()
{
	int n;
	int a,sum=0,c;
	int i,j,k;
	int length=0;
	int s[20];
	int flag=0;
	while (scanf("%d",&n)!=EOF)
	{
		a=n/2;
		for(i=1;i<=a;i++)
		{
			c=i;
			sum=c;
			while(sum<=n)
			{
				s[length]=c;
				length++;
				c++;
				sum=sum+c;
				
			}
			sum=sum-c;
			if(sum==n)
			{
				flag=1;
				for(j=0;j<length;j++)
					printf("%d ",s[j]);
					printf("\n");
			}
			for(k=0;k<length;k++)
				s[k]=0;
			length=0;sum=0;
		}
		if(flag==0)
			printf("NONE\n");
		flag=0;
	}
}