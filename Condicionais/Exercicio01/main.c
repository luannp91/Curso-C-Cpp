#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    /*
        Crie um algoritmo que leia 3 notas e calcule a média entre elas.
        Se o valor for maior que 7 informe que o estudante foi aprovado,
        senão foi reprovado.
    */

    //   Definindo Variáveis
    float nota1, nota2, nota3, resultado;

    printf("Digite a nota N1: ");
    scanf("%f", &nota1);
    printf("Digite a nota N2: ");
    scanf("%f", &nota2);
    printf("Digite a nota N3: ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) / 3;
    printf("\n A média do aluno foi: %.2f", resultado);

    if (resultado > 7)
    {
        printf("\n O estudante foi aprovado :) \n");
    }
    else
    {
        printf("\n O estudante foi reprovado :( \n");
    }
}