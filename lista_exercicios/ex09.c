// Ler dois números inteiros e imprimir o resto da divisão entre eles

#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    resto = a % b;

    printf("Resto da divisao = %d\n", resto);

    return 0;
}
