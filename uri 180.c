#include<stdio.h>
int main()
{
     int N,i,X[1000],pos=0,minor=X[0];
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
          scanf("%d",&X[i]);
          if(minor>X[i])
          {
               minor=X[i];
               pos=i;
          }
     }
     printf("Menor valor: %d\nPosicao: %d\n",minor,pos);
     return 0;
}
