#include<stdio.h>
int main()
{
     int i,a[100],n=2002;
     for(i=0;;i++)
     {
          scanf("%d",&a[i]);
          if(a[i]!=n)
          {
               printf("Senha Invalida\n");
          }
          else
          {
               printf("Acesso Permitido\n");
               return 0;
          }
     }
}
