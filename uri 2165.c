#include<stdio.h>
int main()
{
     char t[500000];
     int m;
      gets(t);
    if(strlen(t)<=140)
     {
          printf("TWEET\n");
     }
     else
     {
          printf("MUTE\n");
     }
     return 0;
}
