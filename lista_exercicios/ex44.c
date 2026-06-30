/*  Imprimir uma escala de temperaturas Celsius e em seguida a mesma escala de
temperaturas em Farenheit, partindo de zero grau Celsius até cinqüenta graus
Celsius, de dez em dez graus. */

#include <stdio.h>

int main() {

    printf("Celsius\tFahrenheit\n");

    for(int c = 0; c <= 50; c += 10) {
        printf("%d\t%.2f\n", c, (c * 9.0 / 5.0) + 32);
    }

    return 0;
}
