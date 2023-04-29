#include<stdio.h>
int main()
{
     char C[10];
     scanf("%s",&C);
      double A,B,X;
     scanf("%lf%lf",&A,&B);
     X=(B*0.15+A);
     printf("TOTAL = R$ %0.2lf\n",X);
     return 0;
}
