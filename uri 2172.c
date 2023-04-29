#include<stdio.h>
int main()
{
    int x;
    long long int m,p;
    while(1)
    {
         scanf("%d %lld",&x,&m);
        if((x!=0)&&(m!=0))
        {
            p=x*m;
            printf("%lld\n",p);

        }
        else
        {
            break;
        }
    }
    return 0;
}
