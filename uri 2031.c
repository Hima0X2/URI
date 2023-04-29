#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %s",a,b);
        if(strcmp(a,"ataque")==0)
        {
            if(strcmp(b,"pedra")==0)
            {
                printf("Jogador 2 venceu\n");
            }
            else if(strcmp(b,"papel")==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else
            {
                printf("Aniquilacao mutua\n");
            }
        }
        else if(strcmp(a,"pedra")==0)
        {
            if(strcmp(b,"ataque")==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(b,"papel")==0)
            {
                printf("Jogador 2 venceu\n");
            }
            else
            {
                printf("Sem ganhador\n");
            }
        }
        else if(strcmp(a,"papel")==0)
        {
            if(strcmp(b,"pedra")==0)
            {
                printf("Jogador 1 venceu\n");
            }
            else if(strcmp(b,"ataque")==0)
            {
                printf("Jogador 2 venceu\n");
            }
            else
            {
                printf("Ambos venceram\n");
            }
        }
    }
    return 0;
}
