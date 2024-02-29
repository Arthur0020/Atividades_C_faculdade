/*
Nome do programa: Separador de pares e ímpares
descrição: Este programa recolhe os números digitados e os separa em pares e ímpares
Autor(es):Arthur Mendes
Data: 29/02/24
*/

#include <stdio.h>

int main()
{
    int tamanho_vetor = 12;
    int numeros[tamanho_vetor], vetorpar[tamanho_vetor], vetorimpar[tamanho_vetor];
    int i;
    
    printf("Digite 12 números inteiros aleatórios\n");
    
    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o número %d:", i +1);
        scanf("%d", &numeros[i]);
    }
    
    int num_par = 0;
    int num_impar = 0;
    
    for(i = 0; i < tamanho_vetor; i++)
    {
        if(numeros[i] % 2 == 0)
        {
            vetorpar[num_par] = numeros[i];
            num_par++;
        }
        
        else
        {
            vetorimpar[num_impar] = numeros[i];
            num_impar++;
        }
    }
    
    printf("Números pares: ");
    for(i = 0; i < num_par; i++)
    {
        printf("%d ,", vetorpar[i]);
    }
    
    printf("\n");
    
    printf("Números ímpares: ");
    for(i = 0; i < num_impar; i++)
    {
        printf("%d ,", vetorimpar[i]);
    }
    

    return 0;
}
