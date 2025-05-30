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
    // Usando 'do while'
    printf("\nMovimentação do Bispo:\n");
    do
    {
        printf("Direita Cima\n");
        bishop --;
    } while (bishop > 0);
    
    // Movimentação da Dama
    // Usando 'for'
    printf("\nMovimmentação da Dama:\n");
    for(int queen = 0; queen < 8; queen ++)
    {
        printf("Esquerda\n");
    }

    return 0;
}
