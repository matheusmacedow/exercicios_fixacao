// Ler o raio de um círculo. Calcular e imprimir o comprimento desse círculo

#include <stdio.h>

int main() {
    float raio, comprimento;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("Comprimento = %.2f\n", comprimento);

    return 0;
}
