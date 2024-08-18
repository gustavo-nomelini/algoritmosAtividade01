// 2)Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá
// calcular e mostrar:
// a. A menor altura do grupo;
// b. A maior altura do grupo;
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

        float alturaFor=0; 
        float menorAlturaFor=0, maiorAlturaFor=0;
        int contadorWhile=2;
        float alturaWhile=0;
        float menorAlturaWhile=0, maiorAlturaWhile=0; 


        switch (opcao){
            case 1:
                printf("\nDigite a altura da 1a pessoa, com até 2 casas decimais utilizando . : ");
                scanf("%f", &alturaFor);
                menorAlturaFor=alturaFor;
                maiorAlturaFor=alturaFor;
                for(int i=2; i<=3; i++){
                    printf("\nDigite a altura da %da pessoa, com até 2 casas decimais utilizando . : ", i);
                    scanf("%f", &alturaFor);
                    if(alturaFor<menorAlturaFor){
                        menorAlturaFor=alturaFor;
                    }
                    if(alturaFor>maiorAlturaFor){
                        maiorAlturaFor=alturaFor;
                    }
                }
                printf("Utilizando o método FOR obtemos\n");
                printf("Menor Altura inserida foi: %.2f \n", menorAlturaFor);
                printf("Maior Altura inserida foi: %.2f \n", maiorAlturaFor);
                break;

            case 2:
                printf("\nDigite a altura da 1a pessoa, com até 2 casas decimais utilizando . : ");
                scanf("%f", &alturaWhile);
                menorAlturaWhile=alturaWhile;
                maiorAlturaWhile=alturaWhile;
                while(contadorWhile<=3){
                    printf("\nDigite a altura da %da pessoa, com até 2 casas decimais utilizando . : ", contadorWhile);
                    scanf("%f", &alturaWhile);
                    if(alturaWhile<menorAlturaWhile){
                        menorAlturaWhile=alturaWhile;
                    }
                    if(alturaWhile>maiorAlturaWhile){
                        maiorAlturaWhile=alturaWhile;
                    }
                    contadorWhile++;
                }
                printf("Utilizando o método WHILE obtemos\n");
                printf("Menor Altura inserida foi: %.2f \n", menorAlturaWhile);
                printf("Maior Altura inserida foi: %.2f \n", maiorAlturaWhile);
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