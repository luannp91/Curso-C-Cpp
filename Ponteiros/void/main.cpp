#include <stdio.h>
#include <stdlib.h>

//  Função que desenha borda
void desenhaBorda()
{
    printf("|--*--*--*--*--*--*--*--*--| \n");
}

int main()
{

    //  Chamando a Função
    desenhaBorda();

    //  Imprimindo texto na tela
    printf(" Imprimindo texto na tela\n");

    //  Chamando a Função
    desenhaBorda();

    return 0;
}