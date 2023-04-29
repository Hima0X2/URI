#include<stdio.h>
int main()
{
     int T,R1,R2,m,i;
     scanf("%d",&T);
   for(i=1;i<=T;i++)
     {
          scanf("%d%d",&R1,&R2);
          m=R1+R2;
          printf("%d\n",m);
     }
     return 0;
}
