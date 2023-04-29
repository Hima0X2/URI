#include <stdio.h>
int main()
{
   int first[2010] = {0};
   int i, n, m;
   scanf(" %d", &n);
   for(i = 0; i < n; i++) {
      scanf(" %d", &m);
      first[m]++;
   }
   for (i = 1; i <= 2000; i++)
   {
      if(first[i] > 0)
         printf("%d apparece %d vez (es)\n", i, first[i]);
   }
   return 0;
}
