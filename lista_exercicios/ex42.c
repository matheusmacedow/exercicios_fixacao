/* A conversão de Celsius para Ferenheit é dada pela fórmula 𝐶 = 5/9 × (𝐹 − 32).
Ler uma temperatura em Celcius e imprimir o correspondente em Farenheit. */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
