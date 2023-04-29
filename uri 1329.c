#include<stdio.h>
int main()
{
     int n,Ri,i,x=0,y=0;
     while(1)
     {
     scanf("%d",&n);
     if(n==0)break;
     else
     {
          for(i=0;i<n;i++)
          {
               scanf("%d",&Ri);
               if(Ri==0)
               {
                    x++;
               }
               else if(Ri==1)
               {
                    y++;
               }
          }
     }
     printf("Mary won %d times and John won %d times\n",x,y);
     x=0;
     y=0;
     }
     return 0;
}
