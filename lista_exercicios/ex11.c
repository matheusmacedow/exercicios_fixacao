// Ler 5 valores, um de cada vez, e contar quantos destes valores são negativos, quantos são positivos e quantos são zero, imprimindo essa informação.

#include <stdio.h>

int main() {
    int num;
    int positivos = 0, negativos = 0, zeros = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &num);

        if(num > 0)
            positivos++;
        else if(num < 0)
            negativos++;
        else
            zeros++;
    }

    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}
