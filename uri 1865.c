#include<stdio.h>
int main()
{
     int n,i,y;
     char b[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%s %d",b,&y);
          if(strcmp(b,"Thor")==0)
          {
               printf("Y\n");
          }
          else
          {
               printf("N\n");
          }
     }
     return 0;
}
