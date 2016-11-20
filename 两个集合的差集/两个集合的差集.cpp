#include <stdio.h>
#define MAX 100
main()
{
	int a[MAX],b[MAX];
	int q=0,p,m=0,n=0;
	while(m<MAX && q==0)
	{
		scanf("%d",&a[m]);
		if(a[m]==-1)
			q++;
		m++;
	}
	q=0;
	while(n<MAX && q==0)
	{
		scanf("%d",&b[n]);
		if(b[n]==-1)
			q++;
		n++;
	}
	q=0;

	for(int i=0;i<m-1;i++)
	{
		for(int j=0,p=0;j<n-1;j++)
		{
			if(a[i]!=b[j])
				p++;
			if(p==n-1)
				printf("%d ",a[i]);

		}
	}
	return 0;

}