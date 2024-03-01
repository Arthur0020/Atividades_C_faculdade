/*
Nome do programa: Função de dobro, soma e triplo
Descrição: O programa vai solicitar dois números inteiros ao usuário e
vai apresentar na tela como resultado o dobro dos números que devem
ser somados e o resultado da soma que será triplicado.
Autor(es): Arthur Mendes
Data: 01/03/24
*/
#include <stdio.h>

int dobro (int num){
   int resultado_dobro;
    resultado_dobro = (num * 2);
    return (resultado_dobro);
}

int soma (int num1, int num2){
    int resultado_soma;
    resultado_soma = num1 + num2;
    return (resultado_soma);
}

int triplo (int result){
    int resultado_triplo;
    resultado_triplo = result * 3;
    return (resultado_triplo);
}

int main()
{
    int valor1, valor2;
    int result_dobro1, result_dobro2, result_soma, result_triplo;
    
    printf("Digite um número\n>: ");
    scanf("%d", &valor1);
    
    printf("\n");
    
    printf("Digite outro número\n>:");
    scanf("%d", &valor2);
    
    printf("\n");
    
    result_dobro1 = dobro (valor1);
    result_dobro2 = dobro (valor2);
    result_soma = soma (result_dobro1, result_dobro2);
    result_triplo = triplo (result_soma);
    
    printf("O resultado do dobro dos números digitados é: %d e %d \n", result_dobro1, result_dobro2);
    printf("O resultado da soma destes dois números é: %d \n", result_soma);
    printf("O resultado do triplo da soma é: %d", result_triplo);
    
    
    return 0;
}
