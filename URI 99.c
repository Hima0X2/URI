#include<stdio.h>
int main()
{
    int N,X,Y,i,SUM=0;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d%d",&X,&Y);
        {
             if(X>Y)
             {
        for(X=X-1; X>0,X>Y; X--)
        {
            if(X%2!=0)
            {
                SUM=SUM+X;
            }
        }
             }
             else
             {
         for(Y=Y-1;Y>0,Y>X;Y--)
       {
            if(Y%2!=0)
            {
                SUM=SUM+Y;
            }
        }
    }
        }
        printf("%d\n",SUM);
        SUM=0;
    }
    return 0;
}
