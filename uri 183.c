#include<stdio.h>
int main()
{
     int i,j,k,p;
     char O;
     float M[12][12],sum=0,avr;
     scanf("%c",&O);
     for(i=0;i<12;i++)
     {
          for(j=0;j<12;j++)
          {
               scanf("%f",&M[i][j]);
          }
     }
     for(i=0;i<12;i++)
     {
          for(k=i+1;k<12;k++)
          {
               sum=sum+M[i][k];
               p++;
          }
     }
     avr=sum/p*1.00;
      if(O=='S')
    {
        printf("%0.1f\n",sum);
    }
    else if(O=='M')
    {
        printf("%0.1f\n",avr);
    }
     return 0;
}
