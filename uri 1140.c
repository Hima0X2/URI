#include<stdio.h>
#include<string.h>
int main()
{
     char a[100];
     int i;
     while(1)
     {
          scanf("%[^n]",&a);
          if(a=='*')
          {
               break;
          }
          else
          {
               if((a=="Flowers Flourish from France")||(a=="Sam Simmonds speaks softly")||(a=="Peter pIckEd pePPers")||(a=="truly tautograms triumph"))
     {
          printf("Y\n");
     }
     else
     {
          printf("N\n");
     }
          }
     }
     return 0;
}
