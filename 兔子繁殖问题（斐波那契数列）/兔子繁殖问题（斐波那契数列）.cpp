#include<stdio.h>
int main ()
{
	long int f1,f2;
	f1=1;f2=1;
//	printf("%ld,%ld",f1,f2);
	for(int i=1;i<=20;i++)
	{	
		printf("%12ld,%12ld",f1,f2);
		if(i%2==0) printf("\n");
		f1=f1+f2;
		f2=f1+f2;
		

	}
	return 0;
}