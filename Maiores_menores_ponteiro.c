/*
Nome do programa: Maior e menor
descrição: O programa irá ler 4 números e armazena-los em um vetor, depois o vetor será impresso usando ponteiros e usando ponteiros será impresso os maiores numeros e os menores
Autor(es):Arthur Mendes
Data: 11/05/2024
*/

#include <stdio.h>

void encontrarMaiorMenor(int *vetor, int tamanhoVetor, int *maior, int *menor){
    *maior = *menor = vetor[0];
    
    for(int i = 1; i < tamanhoVetor; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
        else if(vetor[i] < *menor){
            *menor = vetor[i];
        }
    }
}


int main()
{
    const int tamanhoVetor = 4;
    int vetor[tamanhoVetor];
    
    printf("Digite os números para serem armazenados: \n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("==============================================\n");

    printf("Imprimindo valores do vetor: \n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    printf("==============================================\n");
    
    int *ptrVetor = vetor;
    int maior, menor;
    
    encontrarMaiorMenor(ptrVetor, tamanhoVetor, &maior, &menor);
    

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    
    return 0;
}
