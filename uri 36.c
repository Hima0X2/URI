#include<stdio.h>
#include<math.h>
int main()
{

    float A,B,C,R1,R2,p,q,r;
    scanf("%f %f %f",&A,&B,&C);
    p=B*B-4*A*C;

    q=2*A;
    if(p>=0&&q!=0)
    {
        r=sqrt(p);
        R1=(-B+r)/q;
        R2=(-B-r)/q;
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else
    printf("Impossivel calcular\n");

}
