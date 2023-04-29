#include<stdio.h>
int main()
{
     int n,i=1,j,k=1,z,p;
     while(scanf("%d",&n)!=EOF)
     {
         z=n+1;
         if(n==0)
         {
              p=1;
         }
     else if(n==1)
         {
              p=2;
         }
         else if(n==2)
         {
              p=4;
         }
         else if(n==3)
         {
              p=7;
         }
         for(i=i;i<n;i++)
         {
              j=i;
         }
         k++;
         i=k;
          printf("Caso %d: %d numero\n",z,p);
     printf("0 %d",k);
     i=1;
     }
    return 0;
}
