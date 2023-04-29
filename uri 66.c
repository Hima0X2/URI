#include<stdio.h>
int main()
{
     int x[100],i,j=0,k=0,l=0,y=0;
     for(i=0;i<5;i++)
     {
          scanf("%d",&x[i]);
     }
     for(i=0;i<5;i++)
     {
          if(x[i]%2==0)
          {
               j++;
          }
          else
          {
               k++;
          }
     }
     for(i=0;i<5;i++)
     {
          if(x[i]>0)
          {
               l++;
          }
          else if(x[i]<0)
          {
               y++;
          }
     }
     printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",j,k,l,y);
     return 0;
}

