#include<stdio.h>
int main()
{
     int p,n,i,m[10];
     scanf("%d%d",&p,&n);
     for(i=1;i<=n;)
     {
        scanf("%d",&m[i]);
        if(m[i]!=10)
         {
              if(p>=m[i])
              {
                  p*=2;
                  i++;
              }
              else
              {
                   break;
              }
         }
     }
     if(p>=m[i])
     {
          printf("YOU WIN\n");
     }
     else
     {
          printf("GAME OVER\n");
     }
     return 0;
}
