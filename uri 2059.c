#include<stdio.h>
int main()
{
     int p, j1, j2, r, a;
     scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
     if(p==1)
     {
          if((j1%2)==0)
          {
               if(r==0)
               {
                    if(a==0)
                    {
                    printf("Jogador 2 ganha!\n");
                    }
               }
               else
               {
                    if(a==0)
                    {
                        printf("Jogador 1 ganha!\n");
                    }
                    else
                    {
                          printf("Jogador 2 ganha!\n");
                    }
               }
          }
     }
     else
     {
          if((j1%2)!=0)
          {
               if(r==0)
               {
                    if(a==0)
                    {
                           printf("Jogador 2 ganha!\n");
                    }
                    else
                    {
                           printf("Jogador 1 ganha!\n");
                    }
               }
               else
               {
                     if(a==0)
                    {
                        printf("Jogador 1 ganha!\n");
                    }
                    else
                    {
                          printf("Jogador 2 ganha!\n");
                    }
               }
          }
     }
     return 0;
}
