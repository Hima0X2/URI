#include<stdio.h>
int main()
{
     float N;
     int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
     scanf("%f",&N);
     a=N/100;
     b= N-a*100;
     c=b/50;
     d=b-c*50;
     e=d/20;
     f=d-e*20;
     g=f/10;
     h=f-g*10;
     i=h/5;
     j=h-i*5;
     k=j/2;
     l=j-k*2;
     m=l/1;
     n=l-m*1;
     o=n/0.50;
     p=n-o*0.50;
     q=p/0.25;
     r=p-q*0.25;
     s=r/0.10;
     t=r-s*0.10;
     u=t/0.05;
     v=t-u*0.05;
     w=v/0.01;
     printf("NOTAS:\n");
     printf("%d nota(s) de R$ 100.00\n",a);
     printf("%d nota(s) de R$ 50.00\n",c);
     printf("%d nota(s) de R$ 20.00\n",e);
     printf("%d nota(s) de R$ 10.00\n",g);
     printf("%d nota(s) de R$ 5.00\n",i);
     printf("%d nota(s) de R$ 2.00\n",k);
     printf("MOEDAS:\n");
     printf("%d nota(s) de R$ 1.00\n",m);
     printf("%d nota(s) de R$ 0.50\n",o);
     printf("%d nota(s) de R$ 0.25\n",q);
     printf("%d nota(s) de R$ 0.10\n",s);
     printf("%d nota(s) de R$ 0.05\n",u);
     printf("%d nota(s) de R$ 0.01\n",w);
}
