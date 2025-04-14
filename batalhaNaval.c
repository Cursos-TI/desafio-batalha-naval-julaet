#include <stdio.h>

//declarar e definir as constantes de linhas e colunas da matriz
#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int tabuleiro[LINHAS][COLUNAS];
    int i, j;

    //montando a matriz com zeros
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
        };
    };

    //posicionando os navios
    //navio 1
    tabuleiro[3][1] = 3;
    tabuleiro[4][1] = 3;
    tabuleiro[5][1] = 3;

    //navio 2
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;
    tabuleiro[2][7] = 3;

    //posicionando mais dois navios na diagonal:
    //navio 3
    tabuleiro[6][4] = 3;
    tabuleiro[7][5] = 3;
    tabuleiro[8][6] = 3;

    //cabecalho do jogo
    printf("------------TABULEIRO DA BATALHA NAVAL-------------\n");
    //nomeando as colunas
    printf("    A   B   C   D   E   F   G   H   I   J\n");

    for (i = 0; i < LINHAS; i++)
    {
        if (i < 9)
        {
            printf(" %d  ", i + 1); // Imprime o número da linha tabulada
        }
        else
        {
            printf("%d  ", i + 1);
        }
        for (j = 0; j < COLUNAS; j++)
        {
            printf(" %d  ", tabuleiro[i][j]); //imprime o valor atribuido
        };
        printf("\n");
    };

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
