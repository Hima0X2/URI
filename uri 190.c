#include<stdio.h>
int main()
{
     int i,j,k,p=0;
     char O;
     float M[120][120],sum=0,avr;
     for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
      for(i=1; i<=5;i++)
    {
        for(j=12-i,k=1;k<=i,j>=7;j--,k++)
        {
               sum=sum+M[i][j];
               p++;
         }
    }
    for(i=10;i>=6;i--)
    {
          for(j=11,k=11-i;k<=11-i,j>=7;j--,k++)
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

