#include<stdio.h>
int main()
{
     int s,sum=0;
     scanf("%d",&s);
     while(s)
     {
     s=s%10;
     if(s==1)
     {
          sum++;
     }
     else
     {
          sum=sum;
     }
     }
}
