#include<stdio.h>
int main()
{
    int i,j,k,p=0;
    char O;
    double M[12][12],sum=0,avr;
    scanf("%c",&O);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1,k=10-i;j<k; j++,k--)
        {
            sum=sum+M[i][j]+M[i][k];
            p=p+2;
        }
    }
    avr=sum/p*1.00;
    if(O=='S')
    {
        printf("%0.1lf\n",sum);
    }
    else if(O=='M')
    {
        printf("%0.1lf\n",avr);
    }
    return 0;
}
