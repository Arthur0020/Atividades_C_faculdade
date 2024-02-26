/*
Nome do programa: Calculadora simples
descrição: Este programa é uma calculadora que realiza as opreações de soma, subtração, multiplicação e divisão
Autor(es):Arthur Mendes
Data: 25/02/24
*/

#include <stdio.h>

int main()
{
    float num1, num2;
    int operacao;
    
    printf("Digite um número: ");
    scanf("%f", &num1);
    
    printf("Digite outro número: ");
    scanf("%f", &num2);
    
    printf("Digite qual operação deseja realizar de acordo com com as opções:\n");
    printf("[1]Adição\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n>:");
    scanf("%d", &operacao);
    
    switch(operacao)
    {
        case 1:
            printf("O resultado da Soma é: %.2f", (num1 + num2));
        break;
        
        case 2:
            printf("O resultado da Subtração é: %.2f", (num1 - num2));
        break;
        
        case 3:
            printf("O resultado da Multiplicação é: %.2f", (num1 * num2));
        break;
        
        case 4:
            printf("O resultado da Divisão é: %.3f", (num1 / num2));
        break;
    }
    
    
    return 0;
}
