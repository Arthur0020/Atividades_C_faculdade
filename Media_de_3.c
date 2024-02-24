/*

Nome do programa: Média de 3 
Descrição: Este programa vai somar 3 valores e mostrar a média entre eles
Autor(es): Arthur Mendes
Data: 21/02/2024

*/
#include <stdio.h>

int main()
{
    int num_1, num_2, num_3;
    
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num_1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num_2);
    
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &num_3);
    
    float media = (num_1 + num_2 + num_3) / 3;
    
    printf("A média entre %d, %d e %d é: %.2f", num_1, num_2, num_3, media);

    return 0;
}
