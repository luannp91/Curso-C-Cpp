#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
//  Crie um algoritmo que leia duas notas e mostre a média entre elas.

    float num1;
    float num2;

    printf("Digite a primeira nota: ", num1);
    scanf("%f", &num1);

    printf("Digite a segunda nota: ", num2);
    scanf("%f", &num2);

    float media = (num1 + num2) / 2;

    printf("A média das notas é: %f \n", media);
}