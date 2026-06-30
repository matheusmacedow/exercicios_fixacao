/* Ler três números positivos e inteiros (A, B, C) e calcular a expressão D = (R + S)
/ 2,
onde R = (A + B) ² e S = (B + C)² */

#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    float R, S, D;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    R = pow(A + B, 2);
    S = pow(B + C, 2);
    D = (R + S) / 2;

    printf("Resultado D = %.2f\n", D);

    return 0;
}
