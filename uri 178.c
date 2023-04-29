#include<stdio.h>
int main()
{
     double a[100],n;
     int i;
     scanf("%lf",&n);
     for(i=0;i<100;i++)
     {
          a[i]=n;
          printf("N[%d] = %0.4lf\n",i,a[i]);
          n=n/2;
     }
return 0;
}
