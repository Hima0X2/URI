#include<stdio.h>
int main()
{
    int N[15],i,sum=0,k=1,j,l,p=1,s;
    for(l=0;N[l]!=0;i++)
    {
        scanf("%d",&N[l]);
            for(i=0; i<N[l]; i++)
            {
                for(j=0; j<N[l]; j++)
                {
                    sum=k;
                    printf("%d   ",sum);
                    k++;
                }
                printf("\n");
                k=1;
            }
            p=1;
        }
        return 0;
    }


