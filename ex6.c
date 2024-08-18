// 6)Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.
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

        int i=100;

        switch (opcao){
            case 1:
                printf("Os números IMPARES entre 100 e 200 são:\n");
                for(i=100; i<=200;i++){
                    if ((i%2)!=0){ //números impares
                        printf("%d\n", i);
                    }
                }
                break;

            case 2:
                printf("Os números IMPARES entre 100 e 200 são:\n");
                while(i>=100 && i<=200){ //incluir o 100 se fosse ímpar
                    if ((i%2)!=0){ //números impares
                        printf("%d\n", i);
                    }
                    i++;
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