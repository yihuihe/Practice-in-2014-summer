#include<stdio.h>
int main ()
{
	int nian,yue,ri;
	int sum;
	printf("请输入要判断的年月日\n");
	scanf("%d %d %d",&nian,&yue,&ri);
	switch (yue)
	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=59;break;
		case 4:sum=90;break;
		case 5:sum=120;break;
		case 6:sum=151;break;
		case 7:sum=181;break;
		case 8:sum=212;break;
		case 9:sum=243;break;
		case 10:sum=273;break;
		case 11:sum=304;break;
		case 12:sum=334;break;
		
	}
	if((nian%4==0&&nian%100!=0)||nian%400==0)
	{
		printf("本年是闰年，这是本年中的第%d天\n",sum+ri+1);
	}
	else 
	{
		printf("本年是平年，这是本年中的第%d天\n",sum+ri);
	}
	return 0;
}