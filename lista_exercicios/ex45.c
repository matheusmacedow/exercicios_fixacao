/*  Ler a razão de uma PA (Progressão Aritmética), o primeiro termo, o último
termo e imprimir a soma dos elementos dessa PA */

#include <stdio.h>

int main() {

    printf("Celsius\tFahrenheit\n");

    for(int c = 0; c <= 50; c += 10) {
        printf("%d\t%.2f\n", c, (c * 9.0 / 5.0) + 32);
    }

    return 0;
}
