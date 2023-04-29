#include<stdio.h>
int main()
{
    int N,i;
    while(N!=0)
    {
        scanf("%d",&N);
        for(i=1; i<N; i++)
        {
            printf("%d ",i);
        }
        if(N!=0)
        {
            printf("%d\n",N);
        }
    }
    return 0;
}
