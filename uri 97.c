#include<stdio.h>
int main()
{
     int I,J,A,N=7;
     for(I=1;I<10;I=I+2)
     {
          for(J=N,A=1;J<16,A<=3;J--,A++)
          {
               printf("I=%d J=%d\n",I,J);
          }
          N=N+2;
     }
     return 0;
}
