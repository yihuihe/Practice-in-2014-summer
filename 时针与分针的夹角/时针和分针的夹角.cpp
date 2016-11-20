#include<stdio.h>
int main ()
{
	int h,m;
	float hj,mj,jj;
	while (scanf("%d:%d",&h,&m)!=EOF)
	{
		h=(h>12)?(h-12):h;
		hj=h*30+m*0.5;
		mj=6*m;
		jj=(hj>mj)?(hj-mj):(mj-hj);
		jj=(jj>180)?(360-jj):jj;
		printf("%0.3f\n",jj);
	}
	return 0;
}