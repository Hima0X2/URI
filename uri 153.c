#include<stdio.h>
int main()
{
     int N,f=1,i;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
          f=f*i;
     }
     printf("%d\n",f);
     return 0;
}
