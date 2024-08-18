// 4)Escrever um algoritmo que leia uma quantidade desconhecida de números e conte
// quantos deles
// estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados
// deve terminar quando for lido um número negativo.
#include <stdio.h>

int main()
{

    int opcao;

    while (1)
    { // loop infinito para o menu
        printf("---------------------------");
        printf("\nMenu de Opções\n");
        printf("1. Calcular usando FOR\n");
        printf("2. Calcular usando WHILE\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("---------------------------");

        float valores;
        int contador1 = 0;
        int contador2 = 0;
        int contador3 = 0;
        int contador4 = 0;

        switch (opcao)
        {
        case 1:
            printf("\nInsira valores reais no intervalo [0-100],\n se um número for negativo o programa encerra: \n");

            for (int i = 1; i <= 10000; i++)
            {
                scanf("%f", &valores);
                if (valores < 0)
                {
                    printf("Você inseriu um valor negativo o programa será encerrado !!\n");
                    printf("--------------------------------------------------------\n");
                    break;
                }
                else if ((valores >= 0 && valores <= 25))
                {
                    contador1++;
                }
                else if ((valores >= 25 && valores <= 50))
                {
                    contador2++;
                }
                else if ((valores >= 51 && valores <= 75))
                {
                    contador3++;
                }
                else if ((valores >= 76 && valores <= 100))
                {
                    contador4++;
                }
                else
                {
                    printf("Valor fora do intervalo [0-100]!!\n");
                }
            }
            printf("Quantidade de números no intervalo [0-25]: %d\n", contador1);
            printf("Quantidade de números no intervalo [26-50]: %d\n", contador2);
            printf("Quantidade de números no intervalo [51-75]: %d\n", contador3);
            printf("Quantidade de números no intervalo [76-100]: %d\n", contador4);
            break;

        case 2:
            // LÓGICA WHILE
            printf("\nInsira valores reais no intervalo [0-100],\n se um número for negativo o programa encerra: \n");
            while(scanf("%f", &valores) >= 0)
            {   
                if (valores < 0)
                {
                    printf("Você inseriu um valor negativo o programa será encerrado!!\n");
                    printf("--------------------------------------------------------\n");
                    break;
                }
                else if ((valores >= 0 && valores <= 25))
                {
                    contador1++;
                }
                else if ((valores >= 25 && valores <= 50))
                {
                    contador2++;
                }
                else if ((valores >= 51 && valores <= 75))
                {
                    contador3++;
                }
                else if ((valores >= 76 && valores <= 100))
                {
                    contador4++;
                }
                else
                {
                    printf("Valor fora do intervalo [0-100] !!\n");
                }
                //scanf("%f", &valores);
            }
            printf("Quantidade de números no intervalo [0-25]: %d\n", contador1);
            printf("Quantidade de números no intervalo [26-50]: %d\n", contador2);
            printf("Quantidade de números no intervalo [51-75]: %d\n", contador3);
            printf("Quantidade de números no intervalo [76-100]: %d\n", contador4);
            break;

        case 3:
            printf("\nVocê optou por sair do sistema. \n");
            return 0; // sai do programa completamente
        default:
            printf("\nOpção inserida inexistente! \n");
            return 0;
        }
    }
    return 0;
}

// printf("Insira valores reais, se um número for negativo o programa encerra: ");
// scanf("%d", &valores);
// if(valores<0){
//     printf("\nVocê inseriu um valor negativo o programa será encerrado\n");
//     return 0;
// }