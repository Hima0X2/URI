#include<stdio.h>
int main()
{
     int N,i;
     float a,b,c,x,avr;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
          scanf("%f%f%f",&a,&b,&c);
          x=(a*2.0)+(b*3.0)+(c*5.0);
          avr=(x)/(2.0+3.0+5.0);
          printf("%0.1f\n",avr);
     }
     return 0;
}
