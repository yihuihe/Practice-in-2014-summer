#include<stdio.h>
#include <stdlib.h>
int main ()
{
	int a[100],b[100];
	int n;
	int i,j,k;
	int q,w;
	while (scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(j=0;j<n;j++)
			scanf("%d",&b[j]);
		q=w=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				if(a[i]==a[j])
					q++;
			for(k=0;k<n;k++)
				if(a[i]==b[k])
					w++;
			if(q!=w)
			{	printf("不相同\n");
			exit(0);
			}

		}
		printf("相同\n");

		
	}
}