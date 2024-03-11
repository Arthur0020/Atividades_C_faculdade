/*
Nome do programa: Vetor ponteiro
descrição: O programa irá ler 6 números e armazena-los em um vetor, depois o vetor será impresso usando ponteiros
Autor(es):Arthur Mendes
Data: 11/05/2024
*/

#include <stdio.h>

int main()
{
    const int tamVet = 6;
    int vetor[tamVet];
    
    printf("Digite seis números para serem armazenados\n");
    for(int i = 0; i < tamVet; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    int *ptrVetor = vetor;
    
    printf("---------------------------------------------\n");

    printf("Imprimindo valores do vetor: \n");
    for(int i = 0; i < tamVet; i++){
        printf("Valor %d: %d\nEndereço de memória: %p\n", i + 1, *(ptrVetor + i), &vetor[i]);
        printf("-----------------------------------------\n");
    }
    
    return 0;
}
