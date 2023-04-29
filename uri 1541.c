#include<stdio.h>
int main()
{
    int e;
     float j,d,a,b,c;
     while(scanf("%f",&a))
     {
          if(a==0)break;
          else
          {
          scanf("%f%f",&b,&c);
          j=((a*b)/c)*100;
          d=sqrt(j);
          e=(int)d;
          printf("%d\n",e);
          }
     }
    return 0;
}
