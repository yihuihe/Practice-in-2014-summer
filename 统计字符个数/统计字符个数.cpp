#include<stdio.h>
int main ()
{
	char s[100];
	char  ch; 
	int length=0; int i;
	int kongge=0,tab=0,huiche=0;
	while ( ch!='#')
	{
		s[length]=ch;
		length++;
		ch=getchar();
	}
	s[length]='\0';

	for(i=0;i<length;i++)
	{
		if(s[i]==' ')
			kongge++;
		if(s[i]=='\t')
			tab++;
		if(s[i]=='\n')
			huiche++;

		
	}
	printf("�ո���=%d,TAB��=%d,�س���=%d\n",kongge,tab,huiche);
	

}