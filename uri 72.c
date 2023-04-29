#include<stdio.h>
int main()
{
     int N,a[10000],i,sum=0,s=0;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<N;i++)
     {
     if((a[i]>=10)&&(a[i]<=20))
     {
          sum++;
     }
     else
     {
         s++;
     }
     }
     printf("%d in\n",sum);
     printf("%d out\n",s);

     return 0;
}
