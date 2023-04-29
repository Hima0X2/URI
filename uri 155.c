#include<stdio.h>
int main()
{
    double i=1,b,sum=0;
    while(i<=100)
    {
        b=(1/i*1.00);
        sum=sum+b;
        i++;
    }
    printf("%0.2f\n",sum);
    return 0;
}
