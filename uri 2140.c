#include<stdio.h>
int main()
{
     long long int n[100],m[100];
     int i;

     for(i=0; ; i++)
     {
       scanf("%lld%lld",&n[i],&m[i]);
       if((m[i]==0)&&(n[i]==0))
       {
            break;
       }
       else
       {
       if((m[i]==2)||(m[i]==5)||(m[i]==10)||(m[i]==20)||(m[i]==50)||(m[i]==100)||(n[i]==2)||(n[i]==5)||(n[i]==10)||(n[i]==20)||(n[i]==50)||(n[i]==100))
       {
            printf("impossible\n");
       }
       else
       {
            printf("possible\n");
       }
  }
     }
     return 0;
}
