// Ler o raio de uma esfera. Calcular e imprimir o volume dessa esfera

#include <stdio.h>

int main() {
    float raio, volume;
    const float PI = 3.14159;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Volume da esfera = %.2f\n", volume);

    return 0;
}
