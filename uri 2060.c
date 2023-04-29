#include<stdio.h>
int main()
{
     int n,i,l,m=0,q=0,o=0,p=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&l);
          if((l%2)==0)
          {
               m++;
          }
          if((l%3)==0)
          {
               q++;
          }
           if((l%4)==0)
          {
               o++;
          }
           if((l%5)==0)
          {
               p++;
          }
     }
     printf("%d Multiplo(s) de 2\n",m);
     printf("%d Multiplo(s) de 3\n",q);
     printf("%d Multiplo(s) de 4\n",o);
     printf("%d Multiplo(s) de 5\n",p);
     return 0;
}
