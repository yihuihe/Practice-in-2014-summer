#include<stdio.h>
int main()
{
	printf("\1\1\n");//���Ǵ�ӡЦ��
	for(int i=1;i<11;i++)
	{
		for(int j=1;j<=i;j++)
			printf("%c%c",219,219);
			printf("\n");
	
	}
	return 0;
}