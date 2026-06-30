// Ler uma temperatura em Farenheit e imprimir o correspondente em Celsius

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius = %.2f\n", celsius);

    return 0;
}
