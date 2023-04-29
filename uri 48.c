#include<stdio.h>
int main()
{
     float N,Novosalario,Reajusteganho,Empercentual;
     char c='%';
     scanf("%f",&N);
     if((N>=0)&&(N<=400.00))
     {
          Novosalario=N+(N*0.15);
          Reajusteganho=(N*0.15);
          Empercentual=15;
     }
     else if((N>=400.01)&&(N<=800.00))
     {
          Novosalario=N+N*0.12;
          Reajusteganho=N*0.12;
          Empercentual=12;
     }
      else if((N>=800.01)&&(N<=1200.00))
     {
          Novosalario=N+N*0.1;
          Reajusteganho=N*0.1;
          Empercentual=10;
     }
      else if((N>=1200.01)&&(N<=2000.00))
     {
          Novosalario=N+N*0.07;
          Reajusteganho=N*0.07;
          Empercentual=7;
     }
      else if(N>=2000.01)
     {
          Novosalario=N+N*0.04;
          Reajusteganho=N*0.04;
          Empercentual=4;
     }
     printf("Novo salario: %0.2f\n",Novosalario);
     printf("Reajuste ganho: %0.2f\n",Reajusteganho);
     printf("Em percentual: %0.0f %c\n",Empercentual,c);
     return 0;
}
