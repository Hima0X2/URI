#include<stdio.h>
int main()
{
    int X[10000],i,N;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
         if((X>10^(-7))&&(X<10^(7)))
         {
        scanf("%d",&X[i]);
    }
    }
    for(i=0; i<N; i++)
    {
        if((X[i]>0)&&(X[i]%2!=0))
        {
            printf("ODD POSITIVE\n");
        }
        else if((X[i]>0)&&(X[i]%2==0))
        {
            printf("EVEN POSITIVE\n");
        }
        else if((X[i]<0)&&(X[i]%2==0))
        {
            printf("EVEN NEGATIVE\n");
        }
        else if((X[i]<0)&&(X[i]%2!=0))
        {
            printf("ODD NEGATIVE\n");
        }
        else
        {
            printf("NULL\n");
        }

    }
    return 0;
}
