#include <stdio.h>
int main()
{
	double lirun=0;
double a;
double lr1,lr2,lr3,lr4,lr5;
lr1=10000;//������ʮ������
lr2=lr1+7500;//������ʮ������ʮ��
lr3=lr2+10000;//�����ڶ�ʮ����ʮ��
lr4=lr3+6000;//��������ʮ����ʮ��
lr5=lr4+6000;//��������ʮ��һ����

scanf("%lf",&a);
if(a<0)
return 0;
else
if(a<100000)
{
	lirun=a*0.1;
	printf("%f\n",lirun);
}
else
if(a<200000)
{
lirun=lr1+(a-100000)*0.075;
printf("%f\n",lirun);
}
else 
if(a<400000)
{
lirun=lr2+(a-200000)*0.05;
printf("%f\n",lirun);
}
else 
if(a<600000)
{
lirun=lr3+(a-400000)*0.03;
printf("%f\n",lirun);
}
else 
if(a<1000000)
{
lirun=lr4+(a-600000)*0.015;
printf("%f\n",lirun);
}
else 
if(a>1000000)
{
lirun=lr5+(a-1000000)*0.01;
printf("%f\n",lirun);
}

return 0;


}