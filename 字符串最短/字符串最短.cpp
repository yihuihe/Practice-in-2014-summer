#include<stdio.h>
void del(char s[],int j,int length);
int main ()
{
	char s[242];
	int n;
	int i,j,k;
	int length;
	for(i=0;((s[i]=getchar())!=EOF&&s[i]!=10);i++)  ;  ///?????s[i]!=10
	length=i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	for(j=0;j<length;j++)
		{
			if(s[j]>s[j+1])  
				break;
		}
		del(s,j,length);
		length--;
	}
	for(k=0;k<length;k++)
		printf("%c",s[k]);
		printf("\n");

	return 0;

}

void del(char s[],int j,int length)
{	 
	for(int i=j;i<length;i++)
		s[j]=s[j+1];

}