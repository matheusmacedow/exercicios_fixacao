//  Faça um programa que leia 5 números e imprima quantos números positivos foram digitados.

#include <stdio.h>

int main() {
    int num;
    int positivos = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > 0)
            positivos++;
    }

    printf("Quantidade de positivos = %d\n", positivos);

    return 0;
}
