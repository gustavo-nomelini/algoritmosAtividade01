// 1)Desenvolver um algoritmo que efetue a soma de todos os números ímpares que
//são múltiplos de três e que se encontram no conjunto dos números de 1 até 500.
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
        printf("---------------------------");
        int somaFor=0;
        int somaWhile=0;
        int contadorWhile=1;


        switch (opcao){
            case 1:
                for(int i=1; i<=500; i++){ 
                    if(i%3 == 0){
                    somaFor=somaFor+i;
                    }
                } 
                printf("\nA soma pelo loop for resultou em %d \n" , somaFor);
                break;
            case 2:
                while(contadorWhile<=500){
                    if(contadorWhile%3 == 0){
                        somaWhile=somaWhile+contadorWhile;
                    }
                contadorWhile++;
                }
                printf("\nA soma pelo loop while resultou em: %d \n" , somaWhile);
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