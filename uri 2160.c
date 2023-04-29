#include<stdio.h>
#include<string.h>
int main()
{
     char L[600];
      int y;
    gets(L);
     y=strlen(L);
     if(y<=80)
     {
          printf("YES\n");
     }
     else if(y>80)
     {
          printf("NO\n");
     }
     return 0;
}
