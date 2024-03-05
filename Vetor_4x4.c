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
    int somads = 0, somap = 0, somai = 0, somaprim = 0;
    float mediap = 0, mediad = 0;
    int cont;
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Digite os elementos da matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    printf("\n");  
    }
    
    
    for(i = 0; i < N; i++)
    {
        somaprim += matriz[i][j];
        somads += matriz[i][(N-1)-i];
        if(i % 2 == 0)
        {
            for(j = 0; j < N; j++)
            somap += matriz[i][j];
            
        cont++;    
        }
        else
        {
            for(j = 0; j < N; j++)
            somai += matriz[i][j];
        }
    }
    
    mediap = somap / (cont*N);
    mediad = (somaprim + somads)/(2*N);
    
    printf("Soma da diagonal secundária: %d \n Soma dos valores das linhas pares: %d \n Soma dos valores das linhas impares: %d \n Media dos valores das linhas pares: %f \n Media dos valores das diagonais: %f", somads, somap, somai, mediap, mediad );
    
    return 0;
}
