#include<stdio.h>
#include<math.h>
int main()
{
     double n,z,p,x,y,q;
     scanf("%lf",&n);
     p=sqrt(5);
     x=(1+p)/2.00;
     y=(1-p)/2.00;
     q=pow(x,n)-pow(y,n);
     z=q/p*1.00;
     printf("%0.1lf\n",z);
     return 0;
}
