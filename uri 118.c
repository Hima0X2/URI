#include<stdio.h>
int main()
{
     double n,i,media,d=0,c=0;
     while(1)
     {
          if(d==2)
          {
               break;
          }
         scanf("%lf",&n);
         if((n>=0)&&(n<=10))
         {
              c=n+c;
              d++;
         }
         else
         {
              printf("nota invalida\n");
         }
     }
       media=(float)c/2.00;
     printf("media = %0.2lf\n",media);
     while(1)
     {
          if(d==2)
          {
               break;
          }
         scanf("%lf",&n);
         if((n>=0)&&(n<=10))
         {
              c=n+c;
              d++;
         }
         else
         {
              printf("nota invalida\n");
         }
        if(n==1)
     {
          d=0;
          continue;
     }}
     return 0;
}
