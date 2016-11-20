#include<stdio.h>
int s[8][8]={0};
int a[8],b[15],c[15];
int sum=0;

void puthuanghou(int n)
{
	int lie;
	for(lie=0;lie<8;lie++)
	{
		if(a[lie] && b[n-lie+7] && c[lie+n])
		{
			s[n][lie]=1;
			a[lie]=0;
			b[n-lie+7]=0;
			c[lie+n]=0;
	
			if(n==7)
			{
			sum++;
			printf("这是第%d个八皇后\n",sum);
			for(int i=0;i<8;i++)
			{	for(int j=0;j<8;j++)
				{	printf("%d",s[i][j]);
					
				}
				printf("\n");
			}
			printf("\n");
			 if(sum%10==0)                     //每输出十种暂停
					{
						printf("按回车键继续……");
						getchar();
					}
					
			}
			else 
	 		 puthuanghou(n+1);

			s[n][lie]=0;
			a[lie]=1;
			b[n-lie+7]=1;
			c[lie+n]=1;

		}
	}
}

int main ()
{
	int i;
	for(i=0;i<8;i++)
		a[i]=1;
	for(i=0;i<15;i++)
	{
		b[i]=1;
		c[i]=1;
	}
	puthuanghou(0);


}