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

void moverBispo(int i) {
    if (i >= BISPO_MOV) return;

    for (int j = 0; j < 1; j++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(i + 1);
}

void moverCavalo() {
    int cima = 0, direita = 0;

    printf("Movimentação do Cavalo (em L):\n");

    for (int passo = 0; passo < 3; passo++) {
        if (passo == 2) break;
        for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {
            if (i < 2) {
                printf("Cima\n");
                cima++;
            }

            if (j == 0) {
                printf("Direita\n");
                direita++;
                continue;
            }
        }
        break;
    }
    printf("--- Fim do L ---\n");
}

int main() {

    printf("Movimentação do Bispo:\n");
    moverBispo(0);
    printf("\n");

    printf("Movimentação da Torre:\n");
    moverTorre(TORRE_MOV);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);
    printf("\n");

    moverCavalo();
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
