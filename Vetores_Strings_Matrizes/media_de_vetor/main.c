#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    /*
        Crie um algoritmo que leia 3 valores para um vetor de 3 posições
        e depois calcule a média dos valores acessando o vetor.
    */
    printf("##########  Versão 1  ##########\n");
    int vetor[3], aux, media;

    //  Forma mais simples
    printf("Digite um valor: ");
    scanf("%d", &vetor[0]);
    printf("Digite um valor: ");
    scanf("%d", &vetor[1]);
    printf("Digite um valor: ");
    scanf("%d", &vetor[2]);

    printf("\n");

    printf("Vetor[0] -> %d \n", vetor[0]);
    printf("Vetor[1] -> %d \n", vetor[1]);
    printf("Vetor[2] -> %d \n", vetor[2]);

    media = (vetor[0] + vetor[1] + vetor[2]) / 3;
    printf("Média: %d \n", media);
    printf("\n");

    printf("##########  Versão 2  ##########\n");
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Digite um valor para a posição vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        media = media + vetor[i];
    }
    printf("Média: %d \n", media / 3);
    printf("\n");

    printf("##########  Versão 3  ##########\n");
    int tamanho;
    printf("Qual será o tamanho do vetor: ");
    scanf("%d", &tamanho);
 
    float novoVetor[tamanho], soma;
 
    int j;
    for(j = 0; j < tamanho; j++){
        printf("Digite um valor: ");
        scanf("%f", &novoVetor[i]);
        soma = soma + novoVetor[i];
    }
    for(i = 0; i < tamanho; i++){
        printf("vetor[%d] = %.2f \n",i, novoVetor[i]);
    }
 
    printf("A média dos valores é: %.2f \n", soma / tamanho);
}