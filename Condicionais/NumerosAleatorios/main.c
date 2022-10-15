#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    //  Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //  Variável que recebe o resto da divisão do número por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //  Variável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    //  Imprime o valor
    printf("%d \n\n", aleatorioSegundo);
}