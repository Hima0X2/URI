#include<stdio.h>
int main()
{
     int A,B,x,y;
     scanf("%d%d",&A,&B);
     x=B%A;
     y=A%B;
     if((x==0)||(y==0))
     {
          printf("Sao Multiplos\n");
     }
     else
     {
          printf("Nao sao Multiplos\n");
     }
     return 0;
}

