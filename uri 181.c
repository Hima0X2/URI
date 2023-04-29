#include<stdio.h>
int main()
{
    int I,L,J;
    float M[12][12],SUM=0,MED;
    char T;
    scanf("%d %c",&L,&T);
    for(I=0; I<12; I++)
    {
        for(J=0; J<12; J++)
        {
            scanf("%f",&M[I][J]);
        }
    }
    for(J=0; J<12; J++)
    {
        SUM=SUM+M[L][J];
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
