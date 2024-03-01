/*
Nome do programa: Verificador de positivo e negativo
Descrição: O programa vai receber um número e vai retornar se o número é positivo ou negativo
Autor(es): Arthur Mendes
Data: 01/03/24
*/
#include <stdio.h>
#include <stdbool.h>

bool verifica(int N){
    return N > 0;
}

int main()
{
    int numero;
    bool verificacao;

    printf("Digite um número\n>:");
    scanf("%d", &numero);
    
    verificacao = verifica(numero);
    
    if(verificacao){
        printf("O número %d é positivo", numero);
    }
    else{
        printf("O número %d é negativo", numero);
    }
    
    
    return 0;
}
