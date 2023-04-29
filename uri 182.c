#include<stdio.h>
int main()
{
    int I,C,J;
    float M[12][12],SUM=0,MED;
    char T;
    scanf("%d %c",&C,&T);
    for(I=0; I<12; I++)
    {
        for(J=0; J<12; J++)
        {
            scanf("%f",&M[I][J]);
        }
    }
    for(I=0; I<12; I++)
    {
        SUM=SUM+M[I][C];
    }
    MED=SUM/12.00;
    if(T=='S')
    {
        printf("%0.1f\n",SUM);
    }
    else if(T=='M')
    {
        printf("%0.1f\n",MED);
    }
    return 0;
}
