#include<stdio.h>
int main()
{
    int N,a[100],i;
    scanf("%d",&N);
        for(i=2; i<N; i++)
        {
            a[0]=0;
            a[1]=1;
            a[i]=a[i-1]+a[i-2];
        }
        for(i=0; i<N-1; i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[i]);
    return 0;
}
