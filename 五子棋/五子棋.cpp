#include<stdio.h>
int main  ()
{
	 int a[19][19];
	 int b,c,d;
	 int i,j,k;
	 int flag=0;
	 for(i=0;i<19;i++)
		 for(j=0;j<19;j++)
			 scanf("%d",&a[i][j]);

	 for(i=0;i<19;i++)
	 {	 for(j=0;j<19;j++)
		{ if(a[i][j]!=0)       
			{	if(a[i][j]==a[i][j+1])	//ÏòÓÒÅĞ¶Ï
				{
				b=j+2; c=2;
				while((a[i][j]==a[i][b])&&c<5)
				{
					b++;
					c++;
				}
				if(c==5)
				{printf("%d:(%d,%d)\n",a[i][j],i+1,j+1);
				 flag=1;
				 break;
				}
			}

			if(a[i][j]==a[i+1][j])	  //ÏòÏÂÅĞ¶Ï
			{
				b=i+2; c=2;
				while(a[i][j]==a[b][j]&&c<5)
				{
					b++;
					c++;
				}
				if(c==5)
				{printf("%d:(%d,%d)\n",a[i][j],i+1,j+1);
				 flag=1;
				 break;
				}
			}

			if(a[i][j]==a[i+1][j+1])	
			{
				b=i+2; d=j+2; c=2;
				while(a[i][j]==a[b][d]&&c<5)
				{
					b++;
					d++;
					c++;

				}
				if(c==5)
				{printf("%d:(%d,%d)\n",a[i][j],i+1,j+1);
				 flag=1;
				 break;
				}
			}
		}

		 }
	   if(flag==1)
		   break;
	 }

	 if(flag==0)
		 printf("No\n");
	 flag=0;
}