#include<stdio.h>
int main()
{
     int a,b,c,d,e,f,g,h,p,q,r,u,s,t,x,z,y;
     char i[1000],j;
     scanf("%s %d",&i[1000],&a);
     scanf("%d %c %d %c %d",&b,&j,&c,&j,&d);
     scanf("%s %d",&i[1000],&e);
     scanf("%d %c %d %c %d",&f,&j,&g,&j,&h);
     x=(a*86400+b*3600+c*60+d);
     y=(e*86400+f*3600+g*60+h);
     {
     if(x<y)
     {
     z=y-x;
     u=(z)/86400.00;
     p=z-u*86400.00;
     q=(p)/3600.00;
     r=p-q*3600.00;
     s=r/60.00;
     t=r-s*60.00;
          printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",u,q,s,t);
     }
     else if(x>y)
     {
     z=24+y-x;
     u=(z)/86400.00;
     p=z-u*86400.00;
     q=p/3600.00;
     r=p-q*3600.00;
     s=r/60.00;
     t=r-s*60.00;
      printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",u,q,s,t);
     }
     else
     {
          printf("0 dia(s)\n0 hora(s)\n0 minuto(s)\n0 segundo(s)\n");
     }
     }
     return 0;
}
