#include<stdio.h>
int main()
{
     int N,i,M;
     scanf("%d",&N);
     for(i=0;i<10000;i++)
     {
          M=N*i+2;
          if((M>1)&&(M<10000))
          {

          printf("%d\n",M);
     }
}
return 0;
}
