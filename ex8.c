// 8)Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma
// sequência em P.A. contendo 10 valores.
#include <stdio.h>

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
        int contador=0, termosPA=10;

        switch (opcao){
            case 1:
                printf("Insira o valor inicial da Progressão Aritmética: ");
                scanf("%d",&valorInicial);
                printf("Insira a Razão da Progressão Aritmética: ");
                scanf("%d",&razao);
                for(contador=0; contador<termosPA; contador++){
                    printf("%do termo da PA = %d\n", contador+1, (valorInicial+contador*razao));
                }
                break;

            case 2:
                printf("Insira o valor inicial da Progressão Aritmética: ");
                scanf("%d",&valorInicial);
                printf("Insira a Razão da Progressão Aritmética: ");
                scanf("%d",&razao);
                while(contador<termosPA){
                        printf("%do termo da PA = %d\n", contador+1, valorInicial+(contador*razao));
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