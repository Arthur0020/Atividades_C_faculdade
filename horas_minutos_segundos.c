/*

Nome do programa:Horas_minutos_segundos
Descrição: Este programa vai receber um tempo em segundos e vai dizer o correspondente em horas, minutos e segundos
Autor: Arthur Mendes
Data:21/02/2024

*/
#include <stdio.h>

int main()
{
    int tempo_segundos;
    
    printf("Digite o tempo total da partida em segundos: \n");
    scanf("%d", &tempo_segundos);
    
    float horas = (tempo_segundos / 3600);
    float minutos = (tempo_segundos / 60);
    
    printf("O tempo em Horas é: %.1f \n", horas);
    printf("O tempo em Minutos é: %.1f \n", minutos);
    printf("O tempo em Segundos é: %d \n", tempo_segundos);
    
    

    return 0;
}
