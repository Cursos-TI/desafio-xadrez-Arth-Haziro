#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_L_MOV 3

void moverTorre(int mov) {
    if (mov == 0) return;
    printf("Direita\n");
    moverTorre(mov - 1);
}

void moverRainha(int mov) {
    if (mov == 0) return;
    printf("Esquerda\n");
    moverRainha(mov - 1);
}

int main() {

    int i, j;

    printf("Movimentação do Bispo:\n");
    for (i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

        printf("Movimentação da Torre:\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    printf("Movimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);

    printf("\n");

    printf("Movimentação do Cavalo:\n");
    for (i = 0; i < CAVALO_L_MOV; i++) {
        for (j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
        j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
        printf("---\n"); 
    }
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
