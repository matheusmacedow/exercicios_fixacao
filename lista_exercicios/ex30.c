// Ler um número natural entre 0 e 9 e imprimir sua tabuada

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero natural entre 0 e 9: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 9) {
        for(int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    } else {
        printf("Numero invalido.\n");
    }

    return 0;
}
