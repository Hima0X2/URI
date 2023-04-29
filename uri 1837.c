#include<stdio.h>
int main()
{
     int a,b,q,r,c;
     scanf("%d%d",&a,&b);
     c=abs(b);
     for(r=0;r<c;)
     {
          if(((a-r)%b)==0)
               {
                    q=(a-r)/b;
                    printf("%d %d\n",q,r);
                    break;
               }
               else
               {
                    r++;
               }
          }
     return 0;
}
