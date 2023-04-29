#include<stdio.h>
int main()
{
     double x;
     char c='-';
     scanf("%lf",&x);
     if(c!='-')
     {
          printf("+");
     }
     printf("%0.4E\n",x);
     return 0;
}

