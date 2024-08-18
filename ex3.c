//3)Desenvolver um algoritmo que leia um número não determinado de valores e
// calcule e escreva a média aritmética dos valores lidos, a quantidade de valores
// positivos, a quantidade de valores negativos e o 
// percentual de valores negativos e positivos.
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



        int numeroValores;
        float valores;
        int numerosPositivos=0, numerosNegativos=0;
        float somaFor=0, somaWhile=0;
        float mediaFor=0, mediaWhile=0;

        switch (opcao){
            case 1:
                printf("\nDigite quantos valores serão inseridos: ");
                scanf("%d", &numeroValores);
                for(int i=1; i<=numeroValores; i++){
                    scanf("%f", &valores);
                    somaFor += valores;
                    mediaFor = somaFor/i;
            
                    if(valores>=0){
                        numerosPositivos++;
                    }else{
                        numerosNegativos++;
                    }
                }
                printf("A média aritmética dos números inseridos vale: %.4f\n", mediaFor);
                printf("A quantidade de números positivos inseridos foi: %d\n", numerosPositivos);
                printf("A quantidade de números negativos inseridos foi: %d\n", numerosNegativos);
                printf("A porcentagem de números positivos inseridos é %d de %d que vale: %d%%\n", numerosPositivos, numeroValores, (numerosPositivos*100/numeroValores) );
                printf("A porcentagem de números negativos inseridos é %d de %d que vale: %d%%\n", numerosNegativos, numeroValores, (numerosNegativos*100/numeroValores) );
                break;

            case 2:
                printf("\nDigite quantos valores serão inseridos: ");
                scanf("%d", &numeroValores);
                int i=1;
                while(i<=numeroValores){
                    scanf("%f", &valores);
                    somaWhile += valores;
                    mediaWhile = somaWhile/i;
            
                    if(valores>=0){
                        numerosPositivos++;
                    }else{
                        numerosNegativos++;
                    }
                    i++;
                }

                printf("A média aritmética dos números inseridos vale: %.4f\n", mediaWhile);
                printf("A quantidade de números positivos inseridos foi: %d\n", numerosPositivos);
                printf("A quantidade de números negativos inseridos foi: %d\n", numerosNegativos);
                printf("A porcentagem de números positivos inseridos é %d de %d que vale: %d%%\n", numerosPositivos, numeroValores, (numerosPositivos*100/numeroValores) );
                printf("A porcentagem de números negativos inseridos é %d de %d que vale: %d%%\n", numerosNegativos, numeroValores, (numerosNegativos*100/numeroValores) );
                

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