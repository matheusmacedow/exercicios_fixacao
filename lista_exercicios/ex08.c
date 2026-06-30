// Ler dois números inteiros e imprimir o primeiro elevado ao segundo e depois o segundo elevado ao primeiro

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("%d elevado a %d = %.0f\n", a, b, pow(a, b));
    printf("%d elevado a %d = %.0f\n", b, a, pow(b, a));

    return 0;
}
