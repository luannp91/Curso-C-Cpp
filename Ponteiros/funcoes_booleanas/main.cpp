#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano()
{
    return true;
}

int main()
{
    //  Definindo Variáveis
    bool variavelBooleana;

    //  Variável recebendo booleano
    variavelBooleana = retornaBooleano();

    //  Se for verdadeiro executa o primeiro bloco
    if (variavelBooleana)
    {
        printf("É Verdadeiro!!! \n");
    }
    else
    {
        printf("É falso \n");
    }

    return 0;
}