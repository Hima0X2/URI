#include<stdio.h>
int main()
{
    long int A[100000],B[100000],count=0;
    int N,i;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
          scanf("%lf%lf",&A[i],&B[i]);
          while(B[i]!=0)
          {
          if(A[i]>=B[i])
          {
               if(A[i]%10==B[i]%10)
               {
                 count++;
               }
               else
               {
                    count=0;
               }
          }
          else
          {
          count=0;
          }
          A[i]=A[i]/10;
           B[i]=B[i]/10;
          }
           if(count==0)
          {
               printf("nao encaixa\n");
          }
          else
          {
               printf("encaixa\n");
          }
           count=0;
     }
return 0;
}
