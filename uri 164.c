#include<stdio.h>
int main()
{
     int N,X,sum=0,K,J,i;
     scanf("%d",&N);
     {
          for(i=1;i<=N;i++)
          {
               scanf("%d",&X);
                   for(J=1;J<X;J++)
                    {
                         if(X%J==0)
                         {
                         sum=sum+J;
                         }
                         else
                         {
                              continue;
                         }
                    }
                    if(sum==X)
                    {
                         printf("%d eh perfeito\n",X);
                    }
                    else
                    {
                         printf("%d nao eh perfeito\n",X);
                    }
                    sum=0;
               }
          }
     return 0;
}
