/*
Nome do programa: Soma de vetores
descrição: Este programa vai pedir ao usuário para digitar 5 valores para serem 
registrados no vetor 1 e mais 5 valores para serem registrados no vetor 2, no 
final irá imprimir os números do vetor 1, do vetor 2 e a soma entre eles.
Autor(es):Arthur Mendes
Data: 27/02/24
*/

#include <stdio.h>

int main()
{
    int vetor1[5] = {};
    int vetor2[5] = {};
    int soma[5] = {};
    int i;
    
    for(i = 0; i < 5; i++)
    {
        printf("Digite os valore a serem armazenados no primeiro vetor\n>: ");
        scanf("%d", &vetor1[i]);
    }
    
    for(i = 0; i < 5; i++)
    {
        printf("Digite os valores a serem armazenados no segundo vetor\n>: ");
        scanf("%d", &vetor2[i]);
    }
    
    for(i = 0; i < 5; i++)
    {
        soma[i] = vetor1[i] + vetor2[i];
    }
    
    printf("Vetor 1: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", vetor1[i]);
    }
    
    printf("\n");
    
    printf("Vetor 2: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", vetor2[i]);
    }
    
    printf("\n");
    
    printf("Soma: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", soma[i]);
    }
    
}
