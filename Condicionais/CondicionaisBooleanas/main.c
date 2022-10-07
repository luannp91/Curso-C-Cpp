#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo Variáveis
    bool a = true, b = false;

    //  Se a For Verdadeiro
    if (a)
    {
        printf("\n a é verdadeiro :)");
    }

    //  Comparando b
    if (b)
    {
        printf("\n b é verdadeiro :)");
    }
    else
    {
        printf("\n b é falso :(");
    }
    
    //  Comparando uma Falsidade
    if (!b)
    {
        printf("\n b é falso :( \n");
    }
}