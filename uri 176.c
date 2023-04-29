#include<stdio.h>
int main()
{
   double a[62];
   int i,N,T;
    a[0]=0;
    a[1]=1;
    for(i=2; i<62; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&N);
        printf("Fib(%d) = %0.0lf\n",N,a[N]);
    }
    return 0;
}
