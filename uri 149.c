#include<stdio.h>
int main()
{
     int N,A,I,sum=0;
     scanf("%d",&A);
     scanf("%d",&N);
     while(N<=0)
     {
          scanf("%d",&N);
     }
     for(I=1;I<=N;I++)
     {
          sum=sum+A;
          A++;
     }
     printf("%d\n",sum);
     return 0;
}
