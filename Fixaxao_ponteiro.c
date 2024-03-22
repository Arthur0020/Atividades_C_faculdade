/*Exercício de fixação de ponteiro*/
#include <stdio.h>

int main()
{
    int x, y;
    int *xPtr = NULL, *yPtr = NULL;
    
    xPtr = &x;
    yPtr = &y;
    
    printf("Digite x: \n");
    scanf("%d", &x);
    
    printf("Digite y: \n");
    scanf("%d", &y);
    
    printf("Endereço xPtr: %p e yPtr: %p \n", &xPtr, &yPtr);
    
    if(&xPtr > &yPtr)
    printf("O maior valor é o de xPtr: %d", *xPtr);
    else
    printf("O maior valor é o de yPtr: %d", *yPtr);

    return 0;
}
