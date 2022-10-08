#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    //  Definindo Variáveis
    int a = 2;
    char b = 'y';

    switch (a)
    {
    case 1:
        printf("\n Opção escolhida: 1 \n");
        break;
    case 2:
        printf("\n Opção escolhida: 2 \n");
        break;
    case 3:
        printf("\n Opção escolhida: 2 \n");
        break;
    default:
        printf("\n Opção inválida \n");
        break;
    }

    //  Switch Case com char
    switch (b)
    {
    case 'x':
        printf("\n A letra é x \n");
        break;
    default:
        printf("\n Opção inválida \n\n");
        break;
    }
}