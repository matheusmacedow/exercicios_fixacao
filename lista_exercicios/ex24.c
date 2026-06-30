// Faça um programa que resolva o somatório abaixo:

#include <stdio.h>

int main() {
    float soma = 0;

    for(int i = 1; i <= 50; i++) {
        soma += (51 - i) / (float)i;
    }

    printf("Somatorio = %.2f\n", soma);

    return 0;
}
