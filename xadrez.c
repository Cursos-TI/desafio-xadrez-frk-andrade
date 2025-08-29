#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Definindo a recursividade

void moverBispo(int casas){
    for (casas; casas > 0; casas--){
        if (casas % 2 == 0) //Se o resultado do cremento for par
        {
        printf("Direita\n");
        casas--;
        }
        printf("Cima\n");
    }
}
    
void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
} 

void moverRainha(int casas){
    for (casas; casas > 0 ; casas--){
        printf("Esquerda\n");
    };
}

void moverCavalo(int casas){
    while (casas > 1){ //Após as duas repetições do loop interno, o externo será executado
        for (casas; casas > 1; casas--) //Esta repetição acontecerá duas vezes
        {
        printf("Cima\n");
        }
        printf("Esquerda\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Declaração da variável que será incrementada
    int i = 0; 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int bispo = 5; // Valor que será exibido ao usuário para informar a quantidade de casas que a peça pode se mover
    
    printf("O Bispo pode se mover %d casas na diagonal\n", bispo);
    
    moverBispo(bispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    int torre = 5;
    i = 0;

    printf("A Torre pode se mover %d casas para a direita\n", torre);

    moverTorre(torre);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int rainha = 8;
    printf("A Rainha pode se mover %d casas para a esquerda\n", rainha);

    moverRainha(rainha);  

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int cavalo = 3;
    printf("O Cavalo pode se mover %d casas em L, sendo duas casas para cima e uma para direita ou esquerda\n", cavalo);
    
    moverCavalo(cavalo);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
