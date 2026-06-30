//  Ler um número e imprimir seu quadrado

#include <stdio.h>

int main() {
    int numero, quadrado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    quadrado = numero * numero;

    printf("Quadrado = %d\n", quadrado);

    return 0;
}
