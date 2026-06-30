// Ler um número e imprimir 5 sucessores deste número.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Os cinco sucessores sao:\n");

    for(int i = 1; i <= 5; i++) {
        printf("%d\n", num + i);
    }

    return 0;
}
