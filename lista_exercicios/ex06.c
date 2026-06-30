//  Ler um número e imprimir sua raiz quadrada

#include <stdio.h>
#include <math.h>

int main() {
    float numero, raiz;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    raiz = sqrt(numero);

    printf("Raiz quadrada = %.2f\n", raiz);

    return 0;
}
