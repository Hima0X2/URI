#include<stdio.h>
int main()
{
    int N,i,a,j,k,s,t;
    scanf("%d",&N);
    for(i=1,a=1; a<=N; i++,a++)
    {
        j=i*i;
        k=j*i;
        printf("%d %d %d\n",i,j,k);
        s=j+1;
        t=k+1;
        printf("%d %d %d\n",i,s,t);
    }
    return 0;
}


