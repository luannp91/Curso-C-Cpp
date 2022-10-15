#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //  Definindo Variáveis
    int a = 1;

    //  Primeiro confere a condição, depois repete o bloco
    while (a <= 10)
    {
        //  Imprimindo a na tela
        printf("\n %d", a);

        //  Incremento
        a++;
    }

    printf("\n");

    //  Alterando o valor de a
    a = 20;

    //  Primeiro executa uma vez, depois confere a condição
    do
    {
        //  Imprimindo a na tela
        printf("\n %d", a);

        //  Incremento
        a++;

    } while (a <= 10);

    printf("\n\n");
}