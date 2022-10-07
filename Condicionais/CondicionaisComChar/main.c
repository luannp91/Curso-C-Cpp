#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo as Variáveis
    char letra = 'x';

    //  Condicional Simples
    if (letra == 'x')
    {
        printf("\n A letra é x :)");
    }
    
    //  Código em ASCII
    printf("\n Código da letra = %d", letra);

    //  Comparando Código ASCII
    if (letra == 120)
    {
        printf("\n A letra é x :) \n");
    }   
}