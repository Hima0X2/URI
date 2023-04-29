#include<stdio.h>
int main()
{
    int N,X,Y,i,j=1,sum=0;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d%d",&X,&Y);
        while(j<=Y)
        {
            if((X%2)!=0)
            {
                j++;
                sum=sum+X;
            }
            X++;
        }
        printf("%d\n",sum);
        sum=0;
        j=1;
    }
    return 0;
}
