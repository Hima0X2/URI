#include<stdio.h>
int main()
{
     int N,i,a[1000];
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
          scanf("%d",&a[i]);
          if(a[i]%2==0)
          {
               printf("0\n");
          }
          else
          {
               printf("1\n");
          }
     }
     return 0;
}
