/*
Nome do programa:
Descrição:
Autor(es):
Data:
*/

#include <stdio.h>

int soma(int num1, int num2)
{
    int resultado_soma;
    resultado_soma = num1 + num2;
    return(resultado_soma);
}

int main()
{
    int valor1, valor2;

    int resultado;
    
    printf("Digite um número\n>:");
    scanf("%d", &valor1);
    
    printf("\n");
    
    printf("Digite outro número\n>:");
    scanf("%d", &valor2);
    
    resultado = soma(valor1, valor2);
    
    printf("O resultado da soma dos números é: %d", resultado);

    return 0;
}
