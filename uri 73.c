#include<stdio.h>
int main()
{
     int N,sum=0,i,m;
     scanf("%d",&N);
     if((N>5)&&(N<2000))
     {
          for(i=2;i<=N;i=i+2)
          {
               m=i*i;
               printf("%d^2 = %d\n",i,m);
          }
     }
     return 0;
}

