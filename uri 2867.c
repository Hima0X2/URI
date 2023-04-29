#include<stdio.h>
int main()
{
     int c,m,n,i;
     long long int j;
     scanf("%d",&c);
for(i=0;i<c;i++)
     {
          scanf("%d%d",&n,&m);
        j=log10(n)*m+1;
        printf("%lld\n",j);
     }
     return 0;
}
