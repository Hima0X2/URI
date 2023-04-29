#include<stdio.h>
int main()
{
    int N,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
    scanf("%d",&N);
    if((N>0)&&(N<2258306))
    {
          n=N/1000;
        o=N-a*1000;
         p=o/500;
        q=o-a*500;
        a=q/100;
        b=q-a*100;
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
    printf("%d note: R$ 1000,00\n%d note:R$ 500,00\n%d note: R$ 100,00\n%d note:R$ 50,00\n%d note:R$ 20,00\n%d note:R$ 10,00\n%d note:R$ 5,00\n%d note:R$ 2,00\n%d note:R$ 1,00\n",n,p,a,c,e,g,i,k,m);
    }return 0;
}
