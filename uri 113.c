#include<stdio.h>
int main()
{
    int X,Y,i;
    for(i=0;; i++)
    {
        scanf("%d%d",&X,&Y);
        if(X!=Y)
        {
            if(X>Y)
            {
                printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }
        }
        else
        {
            return 0;
        }
    }

}
