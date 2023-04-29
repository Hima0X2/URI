#include<stdio.h>
int main()
{
    int N,C,R,i,S,coelhos,ratos,sapos,t;
    char x='%',y='C',z='R',w='S';
    scanf("%d",&N);
    {
    for(i=0;i<N; i=i+3)
    {
            scanf("%d",&C);
            printf(" %c\n",y);
            scanf("%d",&R);
            printf(" %c\n",z);
            scanf("%d",&S);
            printf(" %c\n",w);
        }
            t=C+R+S;
            coelhos=(C*100)/(t*1.00);
            ratos=(R*100)/(t*1.00);
            sapos=(S*100)/(t*1.00);
}
   printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %0.2f %c\n",coelhos,x);
    printf("Percentual de ratos: %0.2f %c\n",ratos,x);
    printf("Percentual de sapos: %0.2f %c\n",sapos,x);
    return 0;
}
