#include <stdio.h>
#include <stdlib.h>

char retornaLetra()
{
    return 'x';
}

int main()
{
    //  Definindo Variáveis
    char letra;

    //  Char recebendo valor de uma função
    letra = retornaLetra();

    //  Imprimindo novo valor
    printf("%c \n", letra);

    return 0;
}