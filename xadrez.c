#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Atividade prática executada por Mateus Belfort


void bispo_mov(int n){  // recursividade aplicad a peça do bispo
  if (n < 6)
  {
    printf("Bispo avança %d Casas para cima a direita\n",n);
    bispo_mov(n+1);
  }  
}

void rainha_mov(int r){ //loop avançado com recursividade na peça da rainha
  if (r < 8)
  {
    printf("Rainha avança %d casas para a esquerda!\n", r);
    rainha_mov(r+1);
  }
}

void torre_mov(int t){ //recursividade aplicado na peça da torre
  if (t < 6)
  {
    printf("Torre avança %d casas para direita!\n", t);
    torre_mov(t+1);
  }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Variaveis declaradas em formqato inteiro e com valor inserido no código para melhor precisão do laço de repetição.

    int bispo = 1, rainha = 1, torre = 1;

    // Implementação de Movimentação do Bispo
    // utilizado o laço de repetição ( while ) com inicial 1 para simular movimento de 5 casa na diagonal para cima a direita.
    printf("==================BISPO==================\n");
    bispo_mov(bispo); //chamando a funão com o movimento do bispo
   
    // Implementação de Movimentação da Torre
    // utilizado o laço de repetição ( for ) com inical 1 para simular a movimentação de 5 casas a direita na horizontal.
    printf("\n==================TORRE==================\n");
    torre_mov(torre);
    // Implementação de Movimentação da Rainha
    // utilizado o laço (do-while) para simular a movimentação de 8 casas  para a esquerda.
    printf("\n==================RAINHA==================\n");
    rainha_mov(rainha);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Utilizado o loop aninhado (for) para determinar o movimento.
    // Um loop representou o movimento vertical para baixo e outro representou o movimento horizontal para a esquerda.

    printf("\n==================CAVALO==================\n");
    for (int lado = 1; lado <= 1; lado++)
    {
      
      for (int cima = 0; cima <= lado; cima++)
      {
        printf("      Cima\n"); //direção que irá se repetir pelo menos duas vezes até encerrar o laço de repetição aninhada
      }
      printf("direita");
      
    }
    printf("\n==========================================\n");


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.*/

    return 0;
}
