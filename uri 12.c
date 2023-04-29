#include<stdio.h>
int main()
{
     double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO,pi=3.14159;
     scanf("%lf %lf %lf",&A,&B,&C);
     TRIANGULO=(1/2.0)*A*C;
     printf("TRIANGULO: %0.3lf\n",TRIANGULO);
     CIRCULO=pi*C*C;
     printf("CIRCULO: %0.3lf\n",CIRCULO);
     TRAPEZIO=((A+B)/2.0)*C;
     printf("TRAPEZIO: %0.3lf\n",TRAPEZIO);
     QUADRADO=B*B;
     printf("QUADRADO: %0.3lf\n",QUADRADO);
     RETANGULO=A*B;
     printf("RETANGULO: %0.3lf\n",RETANGULO);
     return 0;
}
