#include<stdio.h>
int main()
{
     int n,a,t,i;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&a);
          if(a>2015)
          {
               t=a-2015+1;
               printf("%d A.C.\n",t);
          }
          else if(a<2015)
          {
               t=2015-a;
               printf("%d D.C.\n",t);
          }
          else
          {
               printf("1 A.C.\n");
          }
     }
     return 0;
}
