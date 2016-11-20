#include "stdio.h"
int main ()
{
	char a=99,b=65;
	printf("%c%c%c%c%c\n",b,a,a,a,b);
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",a,a,b,a,a);
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",b,a,a,a,b);
	return  0;
	
}