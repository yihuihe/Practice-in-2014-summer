#include<stdio.h>
int ruzhan (int n,char a[],int b );
int zimu(int x);
int main ()
{
	int n,b;
	char a[20];
	int length;
	while (scanf("%d%d",&n,&b)!=EOF)
	{
		if(n<0)  {printf("-");n=-n;}
		length=ruzhan(n,a,b);
		for(int i=length-1;i>=0;i--)
			printf("%c",a[i]);
		printf("\n");

		
	}
}

int ruzhan (int n,char a[],int b )
{	int length=0;
	while (n!=0)
	{
		a[length]=zimu(n%b);
		length++;
		n=n/b;
	}
	return length;

}


int zimu(int x)
{
	if(x<10)  return ('0'+x);
	if(x>=10)  return ('a'+x-10);
}