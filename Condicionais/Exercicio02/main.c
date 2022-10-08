#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    /*
        Crie um algoritmo que leia 3 valores e informe se eles são
        iguais entre si para formar um triângulo equilátero
    */

    //   Definindo Variáveis
    int lado1, lado2, lado3;
    printf("Digite os 3 lados do triângulo: \n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("O triângulo é equilátero :) \n");
    }
    else {
        if ((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1))
        {
            printf("O triângulo é isósceles :) \n");
        }
        else
        {
            printf("O triângulo é escaleno :) \n");
        }        
    }
}