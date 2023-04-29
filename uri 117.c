#include<stdio.h>
int main()
{
    float n,i,media,d=0,c=0;
    while(1)
    {
        if(d==2)
        {

            break;
        }
        scanf("%f",&n);
        if((0<=n)&&(n<=10))
        {
            c=c+n;
            d++;
        }
        else
        {
            printf("nota invalida\n");
        }

    }
    media=(float)c/2.00;
    printf("media = %0.2f\n",media);
    return 0;
}
