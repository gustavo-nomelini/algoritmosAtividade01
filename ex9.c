// 9)Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma
// sequência em P.G. contendo 10 valores.
#include <stdio.h>
#include <math.h> //calcular potenciação com a função POW(base,expoente)

int main(){

    int opcao;

    while(1){ //loop infinito para o menu
        printf("---------------------------");
        printf("\nMenu de Opções\n");
        printf("1. Calcular usando FOR\n");
        printf("2. Calcular usando WHILE\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("---------------------------\n");

        int valorInicial, razao;
        int contador=1, termosPG=10;

        switch (opcao){
            case 1:
                printf("Insira o valor inicial da Progressão Geométrica: ");
                scanf("%d",&valorInicial);
                printf("Insira a Razão da Progressão Geométrica: ");
                scanf("%d",&razao);
                for(contador=1; contador<=termosPG; contador++){
                    printf("%do termo da PG = %.1f\n", contador, (double)(valorInicial*pow(razao,contador-1)));
                }

                break;
            case 2:
                printf("Insira o valor inicial da Progressão Geométrica: ");
                scanf("%d",&valorInicial);
                printf("Insira a Razão da Progressão Geométrica: ");
                scanf("%d",&razao);
                while(contador<=termosPG){
                    printf("%do termo da PG = %.1f\n", contador, (double)(valorInicial*pow(razao,contador-1)));
                    contador++;
                }
                break;
            case 3:
                printf("\nVocê optou por sair do sistema. \n");
                return 0; //sai do programa completamente
            default:
                printf("\nOpção inserida inexistente! \n");
                return 0;
            }
    }

    return 0;
}