// Ler dois números inteiros e imprimir o quociente da divisão inteira entre eles

#include <stdio.h>

int main() {
    int a, b, quociente;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    quociente = a / b;

    printf("Quociente da divisao inteira = %d\n", quociente);

    return 0;
}
