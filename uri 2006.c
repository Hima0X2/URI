#include<stdio.h>
int main()
{
    int a,b,c,d,e,t,p=0;
    scanf("%d",&t);
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(t==a)
    {
        p++;
    }
    if(t==b)
    {
        p++;
    }
    if(t==c)
    {
        p++;
    }
    if(t==d)
    {
        p++;
    }
    if(t==e)
    {
        p++;
    }
    printf("%d\n",p);
    return 0;
}
