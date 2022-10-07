#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
    printf("Olá Mundo\n");    

    int a = 50;
    printf("O valor de a é = %d\n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n", a);

    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f \n", b);

    char letra = 'c';
    printf("O valor da letra é = %c \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor da letra mudou para %c \n", letra);
}