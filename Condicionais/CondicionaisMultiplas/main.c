#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    //  Definindo Variáveis
    int a = 18;

    //  Conectivo Lógico E (AND)
    if (a > 5 && a > 15)
    {
        printf("A variável 'a' está entre 5 e 15 \n");
    }

    //  Conectivo Lógico OU (OR)
    if (a > 5 || a > 15)
    {
        printf("A variável 'a' é maior que 5 ou 15 \n");
    }

    //  Misturando E (AND) e OU (OR)
    if (a > 5 && a < 15 || a == 20)
    {
        printf("\n A variável 'a' está entre 5 e 15 ou ela vale 20 \n");
    }   
}