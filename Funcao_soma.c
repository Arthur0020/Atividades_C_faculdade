/*
Nome do programa: Função de soma
Descrição: Este programa vai solicitar dois números ao usuário e
vai apresentar na tela o resultado da soma desses números usando uma função.
Autor(es): Arhtur Mendes
Data: 29/02/24
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
