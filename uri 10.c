#include<stdio.h>
int main()
{
     int code2,number2,code1,number1;
     float price2,price1,X;
     scanf("%d %d %f",&code1,&number1,&price1);
      scanf("%d %d %f",&code2,&number2,&price2);
    X=number1*price1+number2*price2;
    printf("VALOR A PAGAR: R$ %0.2f\n",X);
    return 0;
}
