#include<stdio.h>
#include<string.h>
int main()
{
     char a[1000];
     int k,n=0,i;
     while(gets(a)!=NULL)
     {
        k=strlen(a);
        for(i=0;i<k;i++)
        {
             if(a[i]!=' ')
             {
                  n++;
                  if((n%2)==0)
                  {
                       if((a[i]>='A')&&(a[i]<='Z'))
                       {
                            a[i]=a[i]+32;
                       }
                       else
                       {
                            a[i]=a[i];
                       }
                  }
                  else
                      {
                       if((a[i]>='a')&&(a[i]<='z'))
                       {
                            a[i]=a[i]-32;
                       }
                       else
                       {
                            a[i]=a[i];
                       }
                  }
             }
        }
         printf("%s\n",a);
     }
     return 0;
}
