#include<stdio.h>
int main()
{
     int x,rev=0;
     unsigned long long int n;
     scanf("%llu",&n);
     while(n!=0)
     {
          x=n%10;
          if(x==0)
          {
               printf("0");
          }
          rev=x+rev*10;
          n=n/10;
     }
     printf("%d\n",rev);
     return 0;
}
