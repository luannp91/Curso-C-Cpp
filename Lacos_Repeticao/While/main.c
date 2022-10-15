#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo Variáveis
    int a = 1, b = 10;

    //  Contando até 10
    while (a <= 10)
    {
        //  Imprimindo a na tela
        printf("\n %d", a);

        //  Incremento
        a++;
    }

    printf("\n");

    //  Contagem Regressiva
    while (b >= 1)
    {
        //  Imprimindo b na tela
        printf("\n %d", b);

        //  Decremento
        b--;
    }

    printf("\n\n");
}