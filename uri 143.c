#include<stdio.h>
int main()
{
    int N,i,a,j,k;
    scanf("%d",&N);
    for(i=1,a=1; a<=N; i++,a++)
    {
        j=i*i;
        k=j*i;
        printf("%d %d %d\n",i,j,k);
    }
    return 0;
}

