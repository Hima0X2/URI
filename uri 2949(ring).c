#include<stdio.h>
#include<string.h>
int main()
{
     int N,b,x,d,e,f,i;
     char a[1000],c;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
          scanf("%s %c",&a[i]  ,&c);
          if(c=='A')
               e++;
          else if(c=='E')
          d++;
          else if(c=='H')
          x++;
          else if(c=='M')
          f++;
          else if(c=='X')
          b++;

     }
      printf("%d Hobbit(s)\n",b);
          printf("%d Humano(s)\n",x);
          printf("%d Elfo(s)\n",d);
          printf("%d Anao(s)\n",e);
          printf("%d Mago(s)\n",f);
     return 0;
}
