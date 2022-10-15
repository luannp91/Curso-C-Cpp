#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo Variáveis
    int cont;

    //  Tabuada do 5;
    for (cont = 1; cont <= 10; cont++)
    {
        printf("\n 5 * %d = %d", cont, 5 * cont);
    }

    printf("\n");

    //  Contando de 2 em 2
    for (cont = 0; cont <= 10; cont += 2)
    {
        printf("\n %d", cont);
    }

    printf("\n");

    //  Contagem regressiva
    for (cont = 10; cont > 0; cont--)
    {
        printf("\n %d", cont);
    }
    
    printf("\n");    
}