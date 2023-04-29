#include<stdio.h>
int main()
{
     long long int N,L,P;
    scanf("%lld%lld",&N,&L);

     if((3<=N)&&(N<=1000000)&&(1<=L)&&(L<=4000))
     {
   P=N*L;
    printf("%lld\n",P);
     }
    return 0;
}
