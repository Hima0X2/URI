#include<stdio.h>
int main()
{
    int n,i,k,sum=0,d=0;
    double avr;
    while(1)
    {
            scanf("%d",&n);

        if(n<0)
        {
            break;
        }
        else
        {
            sum=sum+n;
            d++;
        }
    }
avr=(float)sum/d*1.00;
printf("%0.2lf\n",avr);
return 0;
}
