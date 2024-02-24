/*
Nome do programa: Gerenciador de valores de Hortifruti
descrição: Este programa recolhe os dados de acordo com a compra do usuário e calcula o valor final da compra
Autor(es):Arthur Mendes
Data: 24/02/24
*/

#include <stdio.h>

int main()
{
    float morango_5kg = 7.50;
    float maca_5kg = 3.50;
    float morango_mais_5kg = 5.30;
    float maca_mais_5kg = 2.80;
    int escolha;
    float quantidade;
    float valor1;
    
    printf("------------------------------\nMorango até 5kg ------ R$7,50\n------------------------------\nMorango acima de 5kg - R$5,30\n------------------------------\nMaçã até 5kg --------- R$3,50\n------------------------------\nMaçã acima de 5kg ---- R$2,80\n------------------------------");
    
    printf("Qual fruta deseja comprar?:\n[1]Morango\n[2]Maçã\n>:");
    scanf("%d", &escolha);
    
 
    if(escolha == 1)
    {
        printf("Qual a quantidade em Kg deseja comprar?:\n>:");
        scanf("%f", &quantidade);
        
        if(quantidade <=5)
        {
            valor1 = quantidade * morango_5kg;
            if(valor1 > 19)
            {
               printf("O valor total da sua compra é de:\nR$%.2f", valor1 - (valor1 * 0.08)); 
            }
            else
            printf("O valor total da sua compra é de:\nR$%.2f", quantidade * morango_5kg);
        }
        else
        printf("O valor total da sua compra é de:\nR$%.2f", quantidade * morango_mais_5kg);
    }
    
    if(escolha == 2)
    {
        printf("Qual a quantidade em Kg deseja comprar?:\n>:");
        scanf("%f", &quantidade);
        
        if(quantidade <=5)
        {
           printf("O valor total da sua compra é de:\nR$%.2f", quantidade * maca_5kg); 
        }
        else
        printf("O valor total da sua compra é de:\nR$%.2f", quantidade * maca_mais_5kg);
    }
    
    
    return 0;
}
