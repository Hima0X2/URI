#include<stdio.h>
int main()
{
    int A,B,C,D,x,w,y,z,m,n;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    w=B>C;
    x=D>A;
    y=C+D;
    z=A+B;
    m=C>0;
    n=D>0;
    if((w&&x)&&(y>z)&&(m&&n)&&(A%2==0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
