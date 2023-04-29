#include<stdio.h>
int main()
{
     int A,B,C;
     while(scanf("%d%d%d",&A,&B,&C)!=EOF)
     {
          if((A==B)&&(B==C))
          {
               printf("*\n");
          }
          else  if((A!=B)&&(B==C)&&(C!=A))
          {
               printf("A\n");
          }
          else  if((A==B)&&(B!=C)&&(A!=C))
          {
               printf("C\n");
          }
          else if((A==C)&&(B!=C)&&(B!=A))
          {
               printf("B\n");
          }
     }
     return 0;
}
