// 7)Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a
// tabuada de N. Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N
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

        int numero, multiplicador=0;

        switch (opcao){
            case 1:
                printf("Insira um número para calcular sua tabuada de 0 a 10: ");
                scanf("%d",&numero);
                for (multiplicador=0; multiplicador <=10 ; multiplicador++){
                    printf("%d x %d = %d\n",numero, multiplicador, numero*multiplicador);
                }
                break;

            case 2:
                printf("Insira um número para calcular sua tabuada de 0 a 10: ");
                scanf("%d",&numero);
                while(multiplicador<=10){
                    printf("%d x %d = %d\n",numero, multiplicador, numero*multiplicador);
                    multiplicador++;
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