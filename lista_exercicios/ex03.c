// Ler dois números e imprimir a soma deles.

#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("Soma = %d\n", soma);

    return 0;
}
