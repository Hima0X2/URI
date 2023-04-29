#include<stdio.h>
int main()
{
    int X,sum=0,i,j=1;
    for(i=0;;i++)
    {
         scanf("%d",&X);
    if(X!=0)
    {
        while(j<=5)
        {
            if(X%2==0)
            {
                j++;
                sum=sum+X;
            }
            X++;
        }
        printf("%d\n",sum);
        sum=0;
        j=1;
    }
    else
    {
    return 0;
    }
    }
}
