#include <stdio.h>

int main()
{
    // Declarando as variáveis
    int tower = 5, bishop = 5;

    // Movimentação da Torre
    // Usando 'while'
    printf("Movimentação da Torre:\n");
    while (tower > 0)
    {
        printf("Direita\n");
        tower --;
    }
    
    // Movimentação do Bispo
    // Usando loop aninhado 'do while/do while'
    printf("\nMovimentação do Bispo:\n");
    do
    {
        int i = 0;
        while (i < 1)
        {
            printf("Direita ");
            i++;
        }
        printf("Cima\n");
        bishop --;
    } while (bishop > 0);
    
    // Movimentação da Dama
    // Usando 'for'
    printf("\nMovimmentação da Dama:\n");
    for(int queen = 0; queen < 8; queen ++)
    {
        printf("Esquerda\n");
    }

    // Movimentação do Cavalo
    //Usando loop aninhado 'for/while'
    printf("\nMovimentação do Cavalo\n");
    for (int j = 0; j < 1; j++)
    {
        int k = 0;
        while(k < 2)
        {
            printf("Baixo \n");
            k++;
        }
        printf("Esquerda\n");
    }

    return 0;
}
