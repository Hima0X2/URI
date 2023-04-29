#include<stdio.h>
int main()
{
     int X,Y,i,total=0;
     scanf("%d%d",&X,&Y);
     if(X>Y)
     {
          for(i=Y;i<=X;i++)
          {
               if((i%13)!=0)
               {
                    total=total+i;
               }
          }
     }
     else if(Y>X)
     {
          for(i=X;i<=Y;i++)
          {
               if((i%13)!=0)
               {
                    total=total+i;
               }
          }
     }
     printf("%d\n",total);
     return 0;
}
