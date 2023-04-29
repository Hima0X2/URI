#include<stdio.h>
int main()
{
     int i,X,Y;
     for(i=0;;i++)
     {
     scanf("%d%d",&X,&Y);
     if((X!=0)&&(Y!=0))
     {
          if((X>0)&&(Y>0))
          {
               printf("primeiro\n");
          }
          else if((X>0)&&(Y<0))
          {
               printf("quarto\n");
          }
          else if((X<0)&&(Y<0))
          {
               printf("terceiro\n");
          }
          else
          {
               printf("segundo\n");
          }
     }
     else
     {
           return 0;
     }
}
}
