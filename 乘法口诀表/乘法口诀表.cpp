#include<stdio.h>
int main ()
{
	int i,j;
	int result;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			result=i*j;
			printf("%d*%d=%-4d",i,j,result);//-4d��ʾ����룬ռ4λ

		}
		printf("\n");
	}
	return 0;

}