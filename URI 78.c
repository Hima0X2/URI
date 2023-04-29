#include<stdio.h>
int main()
{
    int N,M,i;
    scanf("%d",&N);
        for(i=1;i<=10;i++)
        {
            M=i*N;
            printf("%d x %d = %d\n",i,N,M);
        }
    return 0;
}
