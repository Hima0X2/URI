#include<stdio.h>
int main()
{

    char a[15]="vertebrado",b[15]="ave",c[15]="mamifero",d[15]="carnivoro",e[15]="onivoro",f[15]="onivoro",g[15]="herbivoro",h[15]="invertebrado",i[15]="inseto",j[15]="anelideo",k[15]="hematofago",l[15]="herbivoro",m[15]="hematofago",n[15]="onivoro";
   //printf("%s",h);
   char x1[15],x2[15],x3[15];
   gets(x1);
   gets(x2);
   gets(x3);
   if(strcmp(a,x1)==0)
   {
        if(strcmp(b,x2)==0)
       {
           if(strcmp(d,x3)==0)
           {
                printf("aguia\n");
           }
           else if(strcmp(e,x3)==0)
            printf("pomba\n");

       }
       else if(strcmp(c,x2)==0)
       {
           if(strcmp(f,x3)==0)
            printf("homem\n");
           else if(strcmp(g,x3)==0)
            printf("vaca\n");
       }

   }
   else if(strcmp(h,x1)==0)
   {
        if(strcmp(i,x2)==0)
       {
           if(strcmp(k,x3)==0)
           {
                printf("pulga\n");
           }
           else if(strcmp(l,x3)==0)
            printf("lagarta\n");

       }
       else if(strcmp(j,x2)==0)
       {
           if(strcmp(m,x3)==0)
            printf("sanguessuga\n");
           else if(strcmp(n,x3)==0)
            printf("minhoca\n");
       }

   }
   return 0;
}
