#include<stdio.h>
int main()
{
    int N,i,k=1,j,l,p=1,a=0;
        while(scanf("%d",&N),N!=0)
        {
        for(i=1; i<=N; i++)
        {
            for(j=1; j<=N; j++)
            {
                 if(j==i)
                 {
                      a=1;
                      k=1;
                 }
                 if(a!=0)
                 {
                      printf("%3d",k);
                      if(j<N)printf(" ");
                      else if(j==N)printf("\n");
                      k++;
                 }
                 else if(a==0)
                 {
                      if(j==1)k=i;
                      printf("%3d",k);
                      if(j<N)printf(" ");
                      else if(j==N)printf("\n");
                      k--;
                 }
            }
           a=0;
        }
      printf("\n");
        }
            return 0;
        }

