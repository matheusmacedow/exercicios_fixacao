//  Ler dois números e imprimir a multiplicação entre eles.

#include <stdio.h>

int main() {
    int a, b, multiplicacao;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    multiplicacao = a * b;

    printf("Multiplicacao = %d\n", multiplicacao);

    return 0;
}
