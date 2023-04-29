#include<stdio.h>
int main()
{
     int a,b,c,d,p,q,x,y,z;
     scanf("%d%d%d%d",&a,&b,&c,&d);
     x=a*60+b;
     y=c*60+d;
     if(x<y)
     {
          z=y-x;
          if(z>=60)
          {
          p=z/60;
          q=z%60;
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",p,q);
          }
          else
          {
               printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",z);
          }
     }
     else if(x==y)
     {
          printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
     }
     else
     {
          z=24*60+y-x;
           if(z>=60)
          {
          p=z/60;
          q=z%60;
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",p,q);
          }
          else
          {
               printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",z);
          }
     }
     return 0;
}
