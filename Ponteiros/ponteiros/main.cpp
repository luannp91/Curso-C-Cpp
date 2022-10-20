#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //  Variável
    int a = 20;

    //  Imprimindo o valor de uma variável
    printf("Valor de a: %d \n", a);

    //  Imprimindo o endereço de uma variável
    printf("Endereço de a: %d \n", &a);

    //  Variáveis armazenam valores
    int b = 10;

    //  Ponteiros armazenam posições da memória
    int *ponteiro;

    //  Ponteiro recebendo a posição na memória da variável b
    ponteiro = &b;

    //  Imprimindo o valor de uma variável
    printf("Valor de b: %d \n", b);

    //  *  =>  Pode ser lido como "Conteúdo apontado por"
    *ponteiro = 40;

    //  Imprimindo o valor de uma variável
    printf("Valor de b: %d \n");

    return 0;
}