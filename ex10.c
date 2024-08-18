// 10)Escreva um algoritmo que leia um valor inicial A e imprima a sequência de
// valores do cálculo de A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120
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

        int x;
        int i=1;
        int fatorial=1;

        switch (opcao){
            case 1:
                printf("Digite um número X inteiro para calcular seu fatorial: \n");
                scanf("%d",&x);

                for(int i=1; i<=x; i++){
                    fatorial = fatorial*i;
                }
                printf("O fatorial de %d! é: %d\n", x, fatorial);
                break;

            case 2:
                printf("Digite um número X inteiro para calcular seu fatorial: \n");
                scanf("%d",&x);
                while(i<=x){
                    fatorial = fatorial*i;
                    i++;
                }
                printf("O fatorial de %d! é: %d\n", x, fatorial);
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