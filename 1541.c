#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c,i,j;
     float d;
     for(i=0;;i++)
     {
          scanf("%d%d%d",&a,&b,&c);
     if((a==0)||(b==0)||(c==0))
     {
     break;
     }
     else
     {
          d=sqrt(((a*b)/c)*100);
          j=(int)d;
     printf("%d\n",j);
     }
     }
    return 0;
}
