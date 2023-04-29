#include<stdio.h>
#include<string.h>
int main()
{
     int qt,n,m,i,p;
     char x[100],y[100];
     scanf("%d",&qt);
     for(i=1;i<=qt;i++)
     {
          scanf("%s PAR %s IMPAR",&x,&y);
          scanf("%d%d",&n,&m);
          p=n+m;
          if(p%2==0)
          {
               printf("%s",x);
          }
          else
          {
               printf("%s",y);
          }
     }
     return 0;
}
