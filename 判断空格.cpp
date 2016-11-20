#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
	int a_count,b_count,c_count;
	int i,length;
	a_count=b_count=c_count=0;
	char ch,buff[1000];
	i=0;
	while ((ch=getchar())!='#')
	{
		buff[i]=ch;
		ch=getchar();
		i++;
	}
	buff[i]='\0';
	
	
	length=strlen(buff);
	for(int j=0;j<length;j++)
	{
		if(buff[j]==' ')
		{a_count++;}
		else if(buff[j]=='\n')
		{b_count++;}
		else if(buff[j]=='\t')
		{c_count++;}
	}
	
	printf("空格数=%d,回车数=%d,制表符数=%d\n",a_count,b_count,c_count);
	return 0;
	
}