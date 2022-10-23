#include <stdio.h>
#include <stdlib.h>

//  Definindo que a função existe
int retornaDez();
float retornaQuebrado();

int main()
{
    //  Definido Variáveis
    int a;

    //  Passando o retorno de uma função para uma variável
    a = retornaDez();

    //  Imprimindo o valor de a
    printf("%d \n", a);

    //  Definindo um float
    float b;

    //  Passando o retorno de uma função para uma variável
    b = retornaQuebrado();

    //  Imprimindo o valor de b
    printf("%f \n", b);

    return 0;
}

//  Função que retorna 10
int retornaDez()
{
    printf("Hello World :) \n");
    int numero = 10;
    return numero;
}

//  Função que retorna um número quebrado
float retornaQuebrado()
{
    return 5.5;
}