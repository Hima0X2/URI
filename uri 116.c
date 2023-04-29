#include<stdio.h>
int main()
{
     int i,N,X,Y;
     float Z;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
          scanf("%d%d",&X,&Y);
          if(Y!=0)
          {
               Z=X/(Y*1.00);
               printf("%0.1f\n",Z);
          }
          else
          {
               printf("divisao impossivel\n");
          }
     }
     return 0;
}
