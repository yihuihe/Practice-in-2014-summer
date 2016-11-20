#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main ()
{
	char str0[100],str1[100],str[100];
	char ch;
	int i=0,j,k;
	int length;

	ch=getchar();

	while(ch!='\n')
	{
		str0[i]=ch;
		ch=getchar();
		i++;
	}
	str0[i]='\0';
	i=0;
	ch=getchar();
	while(ch!='\n')
	{
		str1[i]=ch;
		ch=getchar();
		i++;
	}
	str1[i]='\0';






/*	while((ch=getchar())!='\n');
	{
		str0[i]=ch;
		ch=getchar();
		i++;
	}
	str0[i]='\0';


	i=0;
	while((ch=getchar())!='\n');
	{
		str1[i]=ch;
		ch=getchar();
		i++;
	}
	str1[i]='\0';*/

	i=j=k=0;
	while(str0[i]!='\0' && str1[j]!='\0')
	{
		if(str0[i]<str1[j])
			if(str0[i]==str[k-1])
			{i++;}
			else
			{
				str[k]=str0[i];
				i++;k++;
			}
		else if(str0[i]>str1[j])
				if(str1[j]==str[k-1])
				{j++;}
				else
				{
					str[k]=str1[j];
					j++;k++;
				}
		else
			if(str0[i]==str[k-1])
			{i++;j++;}
			else
			{
				str[k]=str0[i];
				i++;j++;k++;
			}

	}
	if(str0[i]=='\0')
	{
		while(str1[j-1]!='\0')
		{
			if(str1[j]!=str[k-1])
			{
				str[k++]=str1[j++];
			//	j++;k++;
			}
			else
				j++;
		}
	}
	else
	{
		while(str0[i-1]!='\0')
		{
			if(str0[i]!=str[k-1])
				{
				str[k++]=str0[i++];
				//i++;k++;
			}
			else
				i++;
			
		}
	}

	length=strlen(str);
	for(i=0;i<length;i++)
		printf("%c",str[i]);


}