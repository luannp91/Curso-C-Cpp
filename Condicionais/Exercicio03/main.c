#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    /*
        Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch-Case) de 4 opções:
        1 - somar, 2 - subtrair, 3 - dividir, 4 - multiplicar.
        Depois que o usuário escolher uma opção, mostre o resultado
        da operação escolhida com os dois valores lidos.
    */

    //   Definindo as Variáveis
    float valor1, valor2;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("\n Escolha um opção: ");
    printf("\n 1 - Somar");
    printf("\n 2 - Subtrair");
    printf("\n 3 - Dividir");
    printf("\n 4 - Multiplicar \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Resultado da soma: %.2f \n\n", valor1 + valor2);
        break;
    case 2:
        printf("Resultado da subtração: %.2f \n\n", valor1 - valor2);
        break;
    case 3:
        printf("Resultado da divisão: %.2f \n\n", valor1 / valor2);
        break;
    case 4:
        printf("Resultado da multiplicação: %.2f \n\n", valor1 * valor2);
        break;
    default:
        printf("Opção inválida! \n\n");
        break;
    }
}