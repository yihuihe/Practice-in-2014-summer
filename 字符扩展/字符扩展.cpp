#include <stdio.h>
#include<string.h>
int  panduan(char ch)
{
	int flag=-1;
	if(ch>='0' && ch<='9')  flag=0;
	if(ch>='a' && ch<='z')  flag=1;
	if(ch>='A' && ch<='Z')  flag=2;
	return flag;
	
}

int main ()
{
	char s[200];
	char ch;
	int length=0;
	int i,a,b;
	while((ch=getchar())!=EOF && ch!='\n')
	{
		s[length]=ch;
		length++;
	}
	s[length]='\0';
	for(i=0; s[i]!='\0';i++)
	{	ch=s[i];
		if(ch=='-')
		{	
			a=panduan(s[i-1]);
			b=panduan(s[i+1]);
			if(a==b )
			{
				ch=s[i-1]+1;
				while(ch<s[i+1])
				{
					putchar(ch);
						ch++;
				}
			}
			else
				printf("-");
		}
		else
	putchar(s[i]);
	} 
	printf("\n");
	return 0;
}
