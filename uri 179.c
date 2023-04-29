#include<stdio.h>
int main()
{
    int i,j,k=0,l=0,a[20],b[20],c[20];
    for(i=0; i<15; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<20; i++)
    {
        if(a[i]%2==0)
        {
           b[k]=a[i];
            k++;
            if(k==5)
            {
                k=0;
            }
        }
        else
        {
           c[l]=a[i];

            l++;
            if(l==5)
            {
                l=0;
            }
        }
    }
    for(k=0;k<5;k++)
    {
          printf("par[%d] = %d\n",k,b[k]);
    }
    for(l=0;l<5;l++)
    {
           printf("impar[%d] = %d\n",l,c[l]);
    }
    return 0;
}
