#include<stdio.h>
int main()
{
     int N,i,j=1,a;
     scanf("%d",&N);
     for(i=1,a=1;a<=N;i++,a++)
     {
          printf("%d ",i);
          i++;
          printf("%d ",i);
          i++;
          printf("%d ",i);
          i++;
          printf("PUM\n");
     }
     return 0;
}

