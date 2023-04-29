#include<stdio.h>
int main()
{
     int a[100];
     int max=0,i,pos=0;
       for(i=1;i<=100;i++)
     {
          scanf("%d",&a[i]);
     }
        for(i=1;i<=100;i++)
     {
          if(a[i]>max)
          {
               max=a[i];
               pos=i;
          }
     }
     printf("%d\n",max);

          printf("%d\n",pos);
     return 0;
}
