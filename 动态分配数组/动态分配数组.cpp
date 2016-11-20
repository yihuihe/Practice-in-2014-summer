#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	
    //从控制台获取初始数组大小
    int N=0;
    int *a=NULL;
	
    int i;
 //分配空间
   
    printf("Input array length:\n");
    scanf("%d ",&N);
    
	 a=(int *)calloc(N,sizeof(int));
    //填充数据
    for(i=0;i<N;i++){
        a[i]=i+1;
        printf("%-5d",a[i]);
        if((i+1)%10==0){
            printf("\n");
        }
    }
    //释放内存
    free(a);
    a=NULL;

    printf("\n");
    return 0;
}
