#include<stdio.h>
#include<math.h>
int main()
{
     float A,B,C,P,Q,S,X,Area,Perimetro;
     scanf("%f%f%f",&A,&B,&C);
     S=(A+B+C)/2.0;
     P=S*(S-A)*(S-B)*(S-C);
     Q=sqrt(P);
     if(P>0)
     {
          Perimetro =A+B+C;
          printf("Perimetro = %0.1f\n",Perimetro);
     }
     else
     {
         X=(A+B)/2.0;
           Area=X*C;
           printf("Area = %0.1f\n",Area);
     }
     return 0;
}
