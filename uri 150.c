#include<stdio.h>
int main()
{
    int X,Z,i,sum=0,pos,Y,P;
    scanf("%d",&X);
    {
            scanf("%d",&Z);
            while(Z<=X)
            {
                 scanf("%d",&Z);
            }
            for(pos=0,sum=0;X>=Z,sum<Z;X++)
            {
                    sum=sum+X;
                  pos++;
            }
             printf("%d\n",pos);
        }
    return 0;
}
