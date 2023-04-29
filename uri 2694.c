#include<stdio.h>
int main()
{
     int n,i,b,d,f;
     char a[100],c[100],e[100],g[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%s %d %s %d %s %d %s",&a,&b,&c,&d,&e,&f,&g);
          printf("%d\n",b+d+f);
     }
     return 0;
}
