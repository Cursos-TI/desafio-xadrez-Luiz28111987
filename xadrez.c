#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentarBispo(int movimento){
    printf("Movimentacao do Bispo:\n");
    for (int bispo = 1; bispo <= movimento; bispo++) {
        printf("Casa %d: Cima, Direita\n", bispo);
    }

}

void movimentarTorre(int movimento){
    printf("\nMovimentacao da Torre:\n");
    int torre = 0;
    while (torre < movimento) {
        torre++;
        printf("Casa %d: Direita\n", torre);
    }
}

void movimentarRainha(int movimento){
    printf("\nMovimentacao da Rainha:\n");
    int rainha = 0;
    do {
        rainha++;
        printf("Casa %d: Esquerda\n", rainha);
    } while (rainha < movimento);
}

void movimentarCavalo(int movimento){
    printf("\nMovimentacao do Cavalo:\n");
    for (int cavalo = 1; cavalo <= movimento; cavalo++)
    {
        while (cavalo == 1)
        {
            printf("Casa %d: Baixo\n", cavalo);
            cavalo++;
            continue;
        }
        printf("Casa %d: Esquerda\n", cavalo);
        if (cavalo == 3)
        {
            break;
        }
        
        
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int max_casas_bispo = 5;
    int max_casas_torre = 5;
    int max_casas_rainha = 8;
    int max_casas_cavalo = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    movimentarBispo(max_casas_bispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    movimentarTorre(max_casas_torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    movimentarRainha(max_casas_rainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // O cavalo deve se movimentar para baixo e para a esquerda,
    // usando pelo menos duas estruturas de repetição:
    // uma deve ser for e a outra pode ser while ou do-while
    movimentarCavalo(max_casas_cavalo);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}