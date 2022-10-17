#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    /*
        Crie um algoritmo que imprima os números pares de 10 a 20.
        Use While, Do While e For.
    */
    //  While
    int i = 10;
    while (i >= 10 && i <= 20)
    {
        if (i % 2 == 0) {
            printf("%d é par \n", i);
        } else {
            printf("%d é ímpar \n", i);
        }
        i++;
    }
    printf("\n");

    //  Do While
    i = 10;
    do
    {
        if (i % 2 == 0) {
            printf("%d é par \n", i);
        } else {
            printf("%d é ímpar \n", i);
        }
        i++;
    } while (i >= 10 && i <= 20);
    printf("\n");

    //  For
        for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d é par \n", i);
        }else{
            printf("%d é ímpar \n", i);
        }
    }
    printf("\n");
}