#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
//  Crie um algoritmo que leia duas notas e mostre a diferença absoluta entre elas

    int nota1;
    int nota2;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("A diferença do valor absoluto é: %d \n", abs(nota1 - nota2));
}