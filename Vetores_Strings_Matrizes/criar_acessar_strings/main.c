#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    //  Variável
    char palavra[10];

    //  Instrução
    printf("Digite uma palavra: ");

    //  Limpando o buffer
    setbuf(stdin, 0);

    //  Lendo a String
    fgets(palavra, 255, stdin);

    //  Limpando as casas não utilizadas
    palavra[strlen(palavra) - 1] = '\0';

    //  Imprime na tela
    printf("%s \n", palavra);
}