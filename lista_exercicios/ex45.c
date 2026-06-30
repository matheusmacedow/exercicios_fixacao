/*  Ler a razão de uma PA (Progressão Aritmética), o primeiro termo, o último
termo e imprimir a soma dos elementos dessa PA */

#include <stdio.h>

int main() {
    int primeiro, ultimo, razao, soma = 0;

    printf("Primeiro termo: ");
    scanf("%d", &primeiro);

    printf("Ultimo termo: ");
    scanf("%d", &ultimo);

    printf("Razao: ");
    scanf("%d", &razao);

    for(int i = primeiro; i <= ultimo; i += razao) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
