#include<stdio.h>
int main()
{
     int N,x,y,z,sec;
     scanf("%d",&N);
     x=N/3600;
     y=N%3600;
     z=y/60;
     sec=y%60;
     printf("%d:%d:%d\n",x,z,sec);
     return 0;
}
