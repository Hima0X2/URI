#include<stdio.h>
int main()
{
     int x,i;
     scanf("%d",&x);
     for(i=x+1;(i>x&&i<=x+12);i++)
     {
          if(i%2!=0)
          {
               printf("%d\n",i);
          }
     }
     return 0;
}
