#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Declaração da variável que será incrementada
    int i = 0; 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int bispo = 5; // Valor que será exibido ao usuário para informar a quantidade de casas que a peça pode se mover
    
    printf("O Bispo pode se mover %d casas na diagonal\n", bispo);
    
    while (i < 5) { // como a variável de incremento começa no zero, ele precisa ser menor que 5 para contar 5 casas.
        printf("Cima, Direita\n");
        i++; //definindo o incremento para evitar loop infinto
    };
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int torre = 5;
    i = 0;
    printf("A Torre pode se mover %d casas para a direita\n", torre);
    //Mensagem que será exibida até que a condição se torne falsa.
    do {
        printf("Direita\n");
        i++;  //definindo o incremento para evitar loop infinto
    } while (i < 5);
    
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int rainha = 8;
    printf("A Rainha pode se mover %d casas para a esquerda\n", rainha);

    for (i = 0; i < 8; i++) //Declaração, condição e incremento são declaradas de uma só vez.
    {
        printf("Esquerda\n");
    };
    



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
