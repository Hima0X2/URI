#include<stdio.h>
#include<string.h>
int main()
{
     int n,i,a[34];
     char t[34]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
     while(scanf("%d",&n)!=EOF)
     {
          for(i=0;i<n;i++)
          {
               printf("%c",t[i]);
          }
          printf("\n");
     }
     return 0;
}
