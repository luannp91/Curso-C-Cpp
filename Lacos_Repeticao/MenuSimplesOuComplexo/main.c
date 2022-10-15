#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo Variáveis
    int opcao;

    //  Confere e valida a opção
    while (opcao < 1 || opcao > 3)
    {
        //  Inteface do Menu
        printf("Escolha uma opção: \n");
        printf("1 - Opção 1 \n");
        printf("2 - Opção 2 \n");
        printf("3 - Opção 3 \n");

        //  Lendo a opção
        scanf("%d", &opcao);

        //  Resultado de acordo com a opção escolhida
        switch (opcao)
        {
        case 1:
            printf("Opção 1 foi escolhida \n");
            break;
        case 2:
            printf("Opção 2 foi escolhida \n");
            break;
        case 3:
            printf("Opção 3 foi escolhida \n");
            break;
        default:
            printf("Opção Inválida! \n");
            break;
        }
    }
    
    printf("\n\n");

}