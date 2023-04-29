#include<stdio.h>
int main()
{
     int age,years,months,days,x;
     scanf("%d",&age);
     years=age/365;
     x=age%365;
     months=x/30;
     days=x%30;
     printf("%d ano(s)\n",years);
     printf("%d mes(es)\n",months);
     printf("%d dia(s)\n",days);
     return 0;
}
