/*
Nome do programa: organizdor de vetor
descrição: Este programa monta um vetor 4x4 e retira algumas informações dele
Autor(es):Arthur Mendes
Data: 29/02/24
*/

#include <stdio.h>

int main()
{
    int i, j;
    int N = 4;
    int matriz [N][N];
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Digite os elementos da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    printf("\n");  
    }
    
    printf("Soma dos números da diagonal secundária: ");
    for(i = 0; i < N; i++)
    {
        int soma_diagonal = 0;
        
        for(i = 0; i < N; i++)
        {
            int numero_atual = matriz[i][(N - 1) - 1];
            soma_diagonal += numero_atual; 
        }
        printf("%d \n", soma_diagonal);
    }
    
   printf("\n");
    
    printf("Soma das linhas pares da matriz:\n");
    for(i = 0; i <= 2; i+= 2)
    {
        int soma_linhas_pares = 0;
        
        for(j = 0; j < 4; j++)
        {
             soma_linhas_pares += matriz[i][j];
        }
        printf("A soma da linha %d: %d \n", i, soma_linhas_pares);
    }
    
    printf("\n");
    
    printf("Soma das linhas ímpares da matriz:\n");
    for(i = 1; i < 4; i += 2)
    {
        int soma_linhas_impares = 0;
        
        for(j = 0; j < 4; j++)
        {
             soma_linhas_impares += matriz[i][j];
        }
        printf("A soma da linha %d: %d \n", i, soma_linhas_impares);
    }
    
    printf("\n");
    
    printf("Média das linhas pares da Matriz:\n");
    for(i = 0; i <= 2; i+= 2)
    {
        int soma_linhas_pares = 0;
        
        for(j = 0; j < 4; j++)
        {
             soma_linhas_pares += matriz[i][j];
        }
        float media = (float)soma_linhas_pares / 4;
        printf("A média da linha %d: %.2f \n", i, media);
    }
    
    int soma_diagonal_1 = 0;
    int soma_diagonal_2 = 0;
    
    for(i = 0; i < N; i ++)
    {
        soma_diagonal_1 += matriz[i][j] ;
    }
    printf("\nSoma da diagonal primaria: %d", soma_diagonal_1);
    
    for(i = 0; i < N; i ++)
    {
        soma_diagonal_2 += matriz[i][N - i - 1] ;
    }
    printf("\nSoma da diagonal secundária: %d", soma_diagonal_2);
    
    return 0;
}
