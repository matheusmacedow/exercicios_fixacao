//  Ler o raio e a altura de um cilindro. Calcular e imprimir o volume desse cilindro

#include <stdio.h>

int main() {
    float raio, altura, volume;
    const float PI = 3.14159;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("Volume do cilindro = %.2f\n", volume);

    return 0;
}
