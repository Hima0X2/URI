#include<stdio.h>
#include<string.h>
int main()
{
     char x[100000];
     int c,i,y;
     float z;
     scanf("%d",&c);
     for(i=0;i<c;i++)
     {
          scanf("%s",x);
          y=strlen(x);
          z=y/100.00;
          printf("%0.2f\n",z);
     }
     return 0;
}
