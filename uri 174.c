#include<stdio.h>
int main()
{
     int i;
     float A[100],x;
     for(i=0;i<100;i++)
     {
          scanf("%f",&A[i]);
     }
      for(i=0;i<100;i++)
     {
          if(A[i]<=10)
          {
               printf("A[%d] = %0.1f\n",i,A[i]);
          }
     }
          return 0;
}
