#include<stdio.h>
int main()
{
     int a,b,c,d,p,q;

     while(1)
     {
          scanf("%d%d%d%d",&a,&b,&c,&d);
          if((a==0)&&(b==0)&&(c==0)&&(d==0))
          {
               break;
          }
          else
          {
               if(a==0)
               {
                    p=24*60+b;
               }
               else
               {
                    p=a*60+b;
               }
               if(c==0)
               {
                    q=24*60+d;
               }
               else
               {
                    q=c*60+d;
               }
               if(p>q)
               {
                    printf("%d\n",24*60 - (p-q));
               }
               else
               {
                    printf("%d\n",q-p);
               }
          }
     }
}
