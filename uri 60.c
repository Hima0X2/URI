#include<stdio.h>
int main()
{
     float x[10];
     int i,j=0;
     for(i=0;i<6;i++)
     {
          scanf("%f",&x[i]);
     }
     for(i=0;i<6;i++)
     {
          if(x[i]>0)
          {
               j++;
          }
     }
     printf("%d valores positivos\n",j);
     return 0;
}
