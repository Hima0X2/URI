#include<stdio.h>
int main()
{
     int b[1000],i=0,n,j;
     scanf("%d",&n);
     for(j=0;j<1000;j++)
     {
          printf("N[%d] = %d\n",j,i);
          i++;
          if(i==n)
          {
               i=0;
          }
     }
     return 0;
}
