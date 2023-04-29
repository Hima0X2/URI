#include<stdio.h>
int main()
{
    int i,j=2;
   float sum=1,k;
    for(i=3;i<=39;i=i+2)
    {
     k=(i)/(j*1.0);
      sum=sum+k;
      j=j*2;
    }
    printf("%0.2f\n",sum);
    return 0;
}

