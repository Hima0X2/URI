#include<stdio.h>
int main()
{
     int h,x;
     char c=':';
     while(scanf("%d%c%d",&h,&c,&x)!=EOF)
     {
         if(h==7)printf("Atraso maximo: %d\n",x);
        else if(h==8) printf("Atraso maximo: %d\n",x+60);
         else if(h==9) printf("Atraso maximo: %d\n",x+120);
         else printf("Atraso maximo: 0\n");
     }
     return 0;
}
