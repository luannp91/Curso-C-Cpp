#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
//  Crie um algoritmo que leia 3 números inteiros de uma só vez e coloque os resultado da 
//  multiplicação entre os 3 em uma variável própria, depois exiba essa variável.

    int nota1, nota2, nota3, resultado;

    printf("Digite as três notas: \n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    resultado = nota1 * nota2 * nota3;
    printf("O resultado é: %d \n", resultado);
}