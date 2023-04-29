#include<stdio.h>
int main()
{
     float N,x;
     scanf("%f",&N);
     if((N>=0.00)&&(N<=2000.00))
     {
          printf("Isento\n");
     }
     else if((N>=2000.01)&&(N<=3000.00))
     {
          x=(N-2000.00)*0.08;
          printf("R$ %0.2f\n",x);
     }
     else if((N>=3000.01)&&(N<=4500.00))
     {
          x=(1000.00)*0.08+(N-3000.00)*0.18;
          printf("R$ %0.2f\n",x);
     }
     else if(N>4500.00)
     {
           x=(1000.00)*0.08+(1500.00)*0.18+(N-4500.00)*0.28;
          printf("R$ %0.2f\n",x);
     }
     return 0;
}
