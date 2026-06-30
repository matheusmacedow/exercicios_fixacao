//  Ler o raio de um círculo. Calcular e imprimir a área desse círculo

#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area = %.2f\n", area);

    return 0;
}
