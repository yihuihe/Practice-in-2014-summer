#include<stdio.h>
#include<string.h>
int jiecheng (int x)
{	
	int i,sum=1;
	for(i=1;i<=x;i++)
		sum=sum*i;
	return sum;

}

int main ()
{
	char  a[20]={0};
	int d,b,c;
	int sum1=0,temp1,temp2,sum2=0;
	int length;
	while(scanf("%s",&a)!=EOF)
	{
	
		b=1;
		length=strlen(a);	
		for(int i=length-1;i>=0;i--)
		{
			temp1=b*(a[i]-48);
			sum1=sum1+temp1;
			b=b*10;
		}
		for(int j=0;j<length;j++)
		{
			temp2=jiecheng(a[j]-48);
			sum2=sum2+temp2;
		}
		printf("%d,",sum1);
		for(int k=0;k<length-1;k++)
			printf("%d!+",a[k]-48);
			printf("%d!=%d\n",a[length-1]-48,sum2);
		if(sum1==sum2)
			printf("Yes\n");
		else
			printf("No\n");

		sum1=sum2=0;
	}

}