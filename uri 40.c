#include<stdio.h>
int main()
{
     float N1,N2,N3,N4,Media,Mediafinal;
     scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
     Media=(N1*2.0+N2*3.0+N3*4.0+N4*1.0)/(2.0+3.0+4.0+1.0);
     printf("Media: %0.1f\n",Media);
     if(Media>=7.0)
     {
          printf("Aluno aprovado.\n");
     }
     else if(Media<5.0)
     {
          printf("Aluno reprovado.\n");
     }
     else if(Media>=5.0&&Media<=6.9)
     {
          printf("Aluno em exame.\n");
     }
     else
     {
          printf("\n");
     }
     if(Media>=5.0&&Media<=6.9)
     {
     float N5;
     scanf("%f",&N5);
     {
          printf( "Nota do exame: %0.1f\n",N5);
          Mediafinal=(Media+N5)/2.0;
     {
          if(Mediafinal>=5.0)
          {
               printf("Aluno aprovado.\n");
          }
          else if(Mediafinal<=4.9)
          {
               printf("Aluno reprovado.\n");
          }
          else
          {
               printf("");
          }
     }
          printf("Media final: %0.1f\n",Mediafinal);
     }
     }
     else
     {
          printf("");
     }
     return 0;
}
