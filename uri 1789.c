#include<stdio.h>
int main()
{
     int l,v,i,m=0;
     while(scanf("%d",&l)!=EOF)
     {
          for(i=0;i<l;i++)
          {
          scanf("%d",&v);
          if(m<v)
               m=v;
          }
          if(m<10)
          {
               printf("1\n");
          }
          else if((m>=10)&&(m<20))
          {
               printf("2\n");
          }
         else if(m>=20)
         {
              printf("3\n");
         }
         m=0;
     }
     return 0;
}
