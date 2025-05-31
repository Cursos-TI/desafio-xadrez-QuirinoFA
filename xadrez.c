#include <stdio.h>

// Função Recursiva da Torre
void tower (int t)
{
    if (t == 0)
    {
        return;
    }
    else
    {
        printf("Direita \n");
        tower(--t);
    }
}

//Função Recursiva do Bispo
void bishop (int stop)
{
    int i = 0;
    do
    {
        i++;
        int j = 0;
        do
        {
            j++;
            if (i == j && j == stop)
            printf("Direita Cima \n");
        } while (j <= i);
    } while (i <= stop);
    if (stop == 0)
        return;
    bishop(--stop);
}

// Função Recursiva da Dama
void queen (int q)
{
    if (q == 0)
        return;
    else
    {
        printf("Esquerda\n");
        queen(--q);
    }
}

int main()
{
    // Declarando as variáveis
    int t = 5, b = 5, q = 8;

    // Movimentação da Torre
    // Usando recursividade
    printf("Movimentação da Torre:\n");
    tower(t);
    
    // Movimentação do Bispo
    // Usando loop aninhado 'do while/do while'
    // E usando recursividade
    printf("\nMovimentação do Bispo:\n");
    bishop(b);
    
    // Movimentação da Dama
    // Usando recursividade
    printf("\nMovimmentação da Dama:\n");
    queen(q);

    // Movimentação do Cavalo
    //Usando loop aninhado 'for/while'
    printf("\nMovimentação do Cavalo\n");
    for (int j = 0; j < 1; j++)
    {
        int k = 0;
        while(k < 2)
        {
            printf("Cima \n");
            k++;
        }
        printf("Direita\n");
    }

    return 0;
}
