#include<stdio.h>
int main()
{
    double A,B,C,a[3],tmp;
    int i,j;
    for(i=0;i<3;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
            if(a[i]<a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }

            //printf("%.2lf \n",a[i]);
    }
    A=a[0];
    B=a[1];
    C=a[2];

        if(A<B+C)
        {

        if(A*A==B*B+C*C)
            {printf("TRIANGULO RETANGULO\n");}
        if(A*A>B*B+C*C)
            {printf("TRIANGULO OBTUSANGULO\n");}
        if(A*A<B*B+C*C)
            {printf("TRIANGULO ACUTANGULO\n");}
        if(A==B&&B==C)
            {printf("TRIANGULO EQUILATERO\n");}
        if(A==B&&A!=C||B==C&&B!=A||A==C&&A!=B)
            {printf("TRIANGULO ISOSCELES\n");}
        }
        else
            printf("NAO FORMA TRIANGULO\n");
            return 0;
            }
