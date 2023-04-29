#include<stdio.h>
int main()
{
     int A;
     float I,J,K;
     for(I=0;I<2.2;)
     {
          for(J=1,A=1;J<=5,A<4;J++,A++)
          {
               K=J+I;
               printf("I=%g J=%g\n",I,K);
          }
             I=I+0.2;
     }
     return 0;
}
