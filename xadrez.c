/*
 * Desafio de Xadrez - MateCheck
 * Código para simular a movimentação de peças: Bispo, Torre e Rainha
 * Utiliza estruturas de repetição e exibe as direções dos movimentos
 */

#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i; // Variável de controle para os loops

    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentos do Bispo:\n");
    for (i = 0; i < MOV_BISPO; i++) { // Estrutura de repetição FOR
        printf("Diagonal Superior Direita\n");
    }
    printf("-----------------------------\n");

    // Movimentação da Torre (para a direita)
    printf("Movimentos da Torre:\n");
    i = 0;
    while (i < MOV_TORRE) { // Estrutura de repetição WHILE
        printf("Direita\n");
        i++;
    }
    printf("-----------------------------\n");

    // Movimentação da Rainha (para a esquerda)
    printf("Movimentos da Rainha:\n");
    i = 0;
    do { // Estrutura de repetição DO-WHILE
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);

    return 0;
}
