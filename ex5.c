// 5)Faça um algoritmo estruturado que leia uma quantidade não determinada de
// números positivos.
// Calcule a quantidade de números pares e ímpares, a média de valores pares e a
// média geral dos números lidos. O número que encerrará a leitura será zero.
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

        int valores, somaValores=0; //%2==0 tem que ser inteiro
        int contadorPositivos=0;
        int valoresPares=0, valoresImpares=0;
        float mediaValores=0; // (inteiro/inteiro) pode resultar em número racional

        switch (opcao){
            case 1:
                printf("Digite uma quantidade aleatória de números INTEIROS e POSITIVOS,\n o programa encerrará quando a entrada for igual a ZERO: \n");
                
                for(int i=1; i<=10000; i++){
                    scanf("%d", &valores);
                    if(valores<=0){
                        printf("A entrada foi igual a ZERO ou NEGATIVA, o programa será encerrado !!\n");
                        printf("-------------------------------------------------\n");
                        break;
                    }else{ //valores positivos
                        contadorPositivos++;
                        somaValores += valores;
                        if((valores%2) == 0){ //números pares
                            valoresPares++;
                        }else{ // ímpares
                            valoresImpares++;
                        }
                        mediaValores = (float)somaValores/i; //casting int->float
                    }
                }
                printf("O número TOTAL de números POSITIVOS inseridos foram: %d\n", contadorPositivos);
                printf("O número total de números PARES inseridos foram: %d\n", valoresPares);
                printf("O número total de números IMPARES inseridos foram: %d\n", valoresImpares);
                printf("A média dos valores inseridos resultou em: %.4f\n", mediaValores);
                break;

            case 2:
                //LÓGICA WHILE
                printf("Digite uma quantidade aleatória de números INTEIROS e POSITIVOS,\n o programa encerrará quando a entrada for igual a ZERO: \n");

                while (scanf("%d", &valores))
                {
                    if(valores<=0){
                        printf("A entrada foi igual a ZERO ou NEGATIVA, o programa será encerrado !!\n");
                        printf("-------------------------------------------------\n");
                        break;
                    }else{ //valores positivos
                        contadorPositivos++;
                        somaValores += valores;
                        if((valores%2) == 0){ //números pares
                            valoresPares++;
                        }else{ // ímpares
                            valoresImpares++;
                        }
                        mediaValores = (float)somaValores/contadorPositivos; //casting int->float
                    }
                }
                printf("O número TOTAL de números POSITIVOS inseridos foram: %d\n", contadorPositivos);
                printf("O número total de números PARES inseridos foram: %d\n", valoresPares);
                printf("O número total de números IMPARES inseridos foram: %d\n", valoresImpares);
                printf("A média dos valores inseridos resultou em: %.4f\n", mediaValores);
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