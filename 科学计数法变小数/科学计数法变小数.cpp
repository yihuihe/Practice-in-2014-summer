#include<stdio.h>
#include<string.h>

int main ()
{
	char s[100];
	double  sum=0.0,a,b=1.0,c=0.1,sum1=0,sum2=0;
	int length,i=0,j=0,k=0,l=0;
	int length1=0,length2=0;
	int flag=0;
	while(scanf("%s",&s)!=EOF)
	{
		length=strlen(s);
		j=0;length1=0;
		while(s[j]!='e')
		{
			length1++;
			j++;
		}
		c-0.1;
		for(i=2;i<length1;i++)
		{
			sum=sum+c*(s[i]-48);
			c=c/10;
		}
		sum1=sum+(s[0]-48);
		
		printf("%f\n",sum1);


		if(s[j+1]=='-')
		{
			flag=1;
			b=1.0;
			for(k=length-1;k>j+1;k--)
			{
				sum2=sum2+(s[k]-48)*b;
				b=b*10;
				
			}
		}
		else
		{
			for(k=length-1;k>j;k--)
			{
				sum2=sum2+(s[k]-48)*b;
				b=b*10;
				
			}
			
		}
		printf("%f\n",sum2);

		if(flag==1)
		{
			for(l=0;l<sum2;l++)
				sum1=sum1/10.0;
			printf("%0.10lf\n",sum1);
		}
		else 
		{
			for(l=0;l<sum2;l++)
				sum1*=10.0;
		}

		flag=0;
		printf("%.0lf\n",sum1);
		length=length1=length2=0;
		sum=sum1=sum2=0;
		for(i=0;i<length;i++)
			s[i]='0';
	}
}