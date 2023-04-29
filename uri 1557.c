#include<stdio.h>
int main()
{
    int N,i,sum=0,k=1,j,l,p=1,s;
    while( scanf("%d",&N),N!=0)
    {
            for(i=1; i<=N; i++)
            {
                for(j=1; j<=N; j++)
                {
                     sum=k;
                    printf("%d",sum);
                    for(s=1;s<=N;s++)
                    {
                         if((j!=N)||(i!=N))
                         {
                         printf(" ");
                         }
                    }
                    k=k*2;
                }
                printf("\n");
                p=p*2;
                k=p;
            }
            printf("\n");
            k=1;
            p=1;
        }
        return 0;
    }

