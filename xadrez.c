#include <stdio.h>
//XADRE NOVATO

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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

   
        // Movimento da torre
            printf("Movimento da Torre: \n");
            for (int i =0; i < 5; i++) {
                printf("Direita → \n");
            }
            printf("\n");
            // Movimento do Bispo

            printf("Movimento do Bispo\n");
            int i = 0;
            while (i < 5)
            {
                printf("Frente ↑ / Direita → ↗\n");
                i++;
            }
            printf("\nn");

            //Movimento da Rainha
            printf("Movimento da Rainha\n");
            int r = 0;
        
            do {
                printf("Esquerda ←\n");
                r++;
            } while (r < 4);
            
            
            
        
    return 0;
}
