#include<stdio.h>
int main()
{
     int V,I,N[10];
     scanf("%d",&V);
     for(I=0;I<10;I++)
     {
         N[I]=V;
         printf("N[%d] = %d\n",I,V);
         V=V*2;
     }
     return 0;
}
