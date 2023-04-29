#include<stdio.h>
int main()
{
     int N,i,j,k,a[70][70];
     while(scanf("%d",&N)!=EOF)
     {
          k=N;
          for(i=1;i<=N;i++)
          {
               for(j=1;j<=N;j++)
               {
                    if(i==j)
                    {
                         a[i][j]=1;
                    }
                    else
                    {
                         a[i][j]=3;
                    }
                 if(j==k)
                    {
                         a[i][j]=2;
                         k--;
                    }
               }
          }
          for(i=1;i<=N;i++)
          {
               for(j=1;j<=N;j++)
               {
                    printf("%d",a[i][j]);
               }
               printf("\n");
          }
     }
     return 0;
}
