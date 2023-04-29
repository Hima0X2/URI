#include<stdio.h>
int main()
{
     int a,b,c,Maior,d,e,f,g,h;
     scanf("%d%d%d",&a,&b,&c);
     d=a+b;
     e=abs(a-b);
     f=0.5*(d+e);
     g=f+c;
     h=abs(f-c);
     Maior=0.5*(g+h);
     printf("%d eh o maior\n",Maior);
     return 0;
}
