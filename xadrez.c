#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Atividade prática executada por Mateus Belfort

int main() {
    // Nível Novato - Movimentação das Peças
    // Variaveis declaradas em formqato inteiro e com valor inserido no código para melhor precisão do laço de repetição.

    int torre = 1, bispo = 1, rainha = 1;

    // Implementação de Movimentação do Bispo
    // utilizado o laço de repetição ( while ) com inicial 1 para simular movimento de 5 casa na diagonal para cima a direita.

    while (bispo <= 5)
    {
      printf("Bispo avança %d Casas para cima a direita\n",bispo);
      bispo++;
    }


    // Implementação de Movimentação da Torre
    // utilizado o laço de repetição ( for ) com inical 1 para simular a movimentação de 5 casas a direita na horizontal.

    for (torre = 1; torre <= 5; torre++)
    {
      printf("Torre avança %d casas para direita!\n", torre);
    }

    // Implementação de Movimentação da Rainha
    // utilizado o laço (do-while) para simular a movimentação de 8 casas  para a esquerda.

    do
    {
      printf("Rainha avança %d casas para a esquerda!\n", rainha);
      rainha++;
    } while (rainha <= 8);

    
    return 0;
}
