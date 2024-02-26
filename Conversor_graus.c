/*
Nome do programa: Conversor de graus
descrição: Este programa vai converter graus Fahrenheit para celsius
Autor(es):Arthur Mendes
Data: 26/02/24
*/

#include <stdio.h>

int main()
{
    float tc, tf;
    
    printf("Fahrenheit------Celsius\n");
    
    for(tf = 50; tf <= 65; tf++)
    {
        tc = (tf-32)*(5.0/9.0);
        printf("  %.2f----------%.2f\n", tf, tc);
    }
    
    
    return 0;
}
