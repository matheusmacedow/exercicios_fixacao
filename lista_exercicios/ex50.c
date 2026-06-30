/* Elabore um programa para simular o jogo de adivinhação:
• o jogador-1 escolhe um número entre 1 e 10;
• o jogador-2 insere no jogo números na tentativa de acertar o número
escolhido pelo jogador-1.
• O jogador-2 possui 4 chances para tentar adivinhar o número do
jogador-1.
Ao final o programa deve informar se ele adivinhou o número, se sim, em qual
das tentativas. */

#include <stdio.h>

int main() {

    int segredo, tentativa;

    printf("Jogador 1, digite o numero secreto: ");
    scanf("%d", &segredo);

    for(int i = 1; i <= 4; i++) {

        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);

        if(tentativa == segredo){
            printf("Acertou na tentativa %d!\n", i);
            return 0;
        }
    }

    printf("Nao acertou o numero.\n");

    return 0;
}
