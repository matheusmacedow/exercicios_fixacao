// Ler um número, se o mesmo for par imprimir os próximos 10 números pares seguintes.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Os 10 proximos pares sao:\n");

        for(int i = 1; i <= 10; i++) {
            num += 2;
            printf("%d\n", num);
        }
    }
    else {
        printf("O numero informado nao e par.\n");
    }

    return 0;
}
