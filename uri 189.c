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
      for(i=1; i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
               sum=sum+M[i][j];
               p++;
          }
    }
    for(i=10;i>=6;i--)
    {
          for(j=0;j<11-i;j++)
          {
                sum=sum+M[i][j];
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

