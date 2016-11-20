#include<stdio.h>
struct	Student
{
	char name[20];
	int score;
};

int main ()
{
	int n; int i,j,k;
	struct Student stu[100];
	struct Student temp;
	while (scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%s%d",&stu[i].name,&stu[i].score);
		for(j=0;j<n-1;j++)
		{	for(k=j+1;k<n;k++)
			{
				if(stu[j].score>stu[k].score)
				{
					temp=stu[j];
					stu[j]=stu[k];
					stu[k]=temp;
				}

			}
		}
		for(i=0;i<n;i++)
			printf("%s  %d\n",stu[i].name,stu[i].score);
	}
	
}