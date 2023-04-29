#include<stdio.h>
int main()
{
     float x[10],avr,sum=0,k;
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
               sum=sum+x[i];
          }
     }
     avr=sum/j;
     printf("%d valores positivos\n",j);
     printf("%0.1f\n",avr);
     return 0;
}
