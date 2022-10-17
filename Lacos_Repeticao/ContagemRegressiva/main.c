#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    /*
        Crie um algoritmo que imprima os números de 10 até 0 de forma regressiva.
        Usar While, Do While e For
    */
    //  While
    int i = 10;
    while (i >= 0)
    {
        printf("%d \n", i);
        i--;
    }
    printf("\n");

    //  Do While
    i = 10;
    do
    {
        printf("%d \n", i);
        i--;
    } while (i >= 0);
    printf("\n");

    //  For
    for (i = 10; i >= 0; i--)
    {
        printf("%d \n", i);
    }
    printf("\n");    
}