#include<stdio.h>
int main()
{
     float x[10];
     int i,j=0,m,n;
     for(i=0;i<5;i++)
     {
          scanf("%f",&x[i]);
     }
     for(i=0;i<5;i++)
     {
          m=x[i]/2;
          n=m*2;
          if(x[i]==n)
          {
               j++;
          }
     }
     printf("%d valores pares\n",j);
     return 0;
}

