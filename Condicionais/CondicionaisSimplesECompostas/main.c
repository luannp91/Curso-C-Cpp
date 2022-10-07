#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo Variáveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //  Condicional Simples
    if (a == 5)
    {
        printf("\n A variável a = 5");
    }
    if (b == 2.5)
    {
        printf("\n A variável b = 2.5");
    }
    if (c == 'x')
    {
        printf("\n A variável c = letra x");
    }

    //  Número par ou ímpar
    if (a % 2 == 1)
    {
        printf("\n A variável a é ímpar!!!");
    }
    else
    {
        printf("\n A variável a é par!!!");
    }

    //  Condicional Composta
    if (opcao == 1)
    {
        printf("\n A opção = 1");
    }
    else if (opcao == 2)
    {
        printf("\n A opção = 2");
    }
    else
    {
        printf("\n A opção não é igual a 1 e nem 2 \n");
    }    
}