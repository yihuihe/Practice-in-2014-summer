#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	
    //�ӿ���̨��ȡ��ʼ�����С
    int N=0;
    int *a=NULL;
	
    int i;
 //����ռ�
   
    printf("Input array length:\n");
    scanf("%d ",&N);
    
	 a=(int *)calloc(N,sizeof(int));
    //�������
    for(i=0;i<N;i++){
        a[i]=i+1;
        printf("%-5d",a[i]);
        if((i+1)%10==0){
            printf("\n");
        }
    }
    //�ͷ��ڴ�
    free(a);
    a=NULL;

    printf("\n");
    return 0;
}
