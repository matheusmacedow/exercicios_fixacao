/*  Faça um programa para imprimir a sequência abaixo para um n informado pelo
usuário. Use uma função que receba um valor n inteiro e imprima até a nésima linha: */

#include <stdio.h>

void imprimirSequencia(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    imprimirSequencia(n);

    return 0;
}
