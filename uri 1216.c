#include<stdio.h>
int main()
{
     int count=0,a,sum=0;
     float d;
     char b[1000];
     while(gets(b)!=NULL)
     {
          scanf("%d",&a);
          {
               count++;
          }
          sum=sum+a;
     }
     d=sum/(count*1.00);
     printf("%0.1f\n",d);
     return 0;
}
