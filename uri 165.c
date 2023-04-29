#include<stdio.h>
int main()
{
    int N,X,J,i,num=0;
    scanf("%d",&N);
    {
        for(i=1; i<=N; i++)
        {
            scanf("%d",&X);
            {
                for(J=2; J<X; J++)
                {
                    if(X%J==0)
                    {
                        num=1;
                        break;
                    }
                    else
                    {
                        num=0;
                    }
                }
                if(num==0)
                {
                    printf("%d eh primo\n",X);
                }
                else
                {
                    printf("%d nao eh primo\n",X);
                }
            }
        }
    }
    return 0;
}
