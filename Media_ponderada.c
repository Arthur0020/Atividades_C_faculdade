/*
Nome do programa: Gerenciador de notas
descrição: Este programa recolhe as notas de um aluno e aplica a média ponderada a fim de chegar na nta final
Autor(es):Arthur Mendes
Data: 24/02/24
*/

#include <stdio.h>

int main()
{
    float trabalho_laboratorio = 2;
    float avaliacao_semestral = 3;
    float exame_final = 5;
    float nota_Laboratorio, nota_avaliacao, nota_exame;
    
    printf("Digite a nota obtida pelo aluno no trabalho de laboratório\n>:");
    scanf("%f", &nota_Laboratorio);
    
    printf("Digite a nota obtida pelo aluno na avaliação semestral\n>:");
    scanf("%f", &nota_avaliacao);
    
    printf("Digite a nota obtida pelo aluno no exame final\n>:");
    scanf("%f", &nota_exame);
    
    float media_ponderada = ((nota_Laboratorio * trabalho_laboratorio) + (nota_avaliacao * avaliacao_semestral) + (nota_exame * exame_final)) / (trabalho_laboratorio + avaliacao_semestral + exame_final);
    
    if(media_ponderada < 5)
    {
        printf("A nota do aluno é: E");
    }
    
    else if(media_ponderada >= 5 && media_ponderada <= 5.9)
    {
        printf("A nota do aluno é: D");
    }
    
    else if(media_ponderada >= 6 && media_ponderada <= 6.9)
    {
        printf("A nota do aluno é: C");
    }
    
    else if(media_ponderada >= 7 && media_ponderada <= 7.9)
    {
        printf("A nota do aluno é: B");
    }
    
    else if(media_ponderada >= 8 && media_ponderada <= 10)
    {
        printf("A nota do aluno é: A");
    }
    
    return 0;
}
