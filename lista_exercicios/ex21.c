/* Escreva um programa para ler dois números inteiros e mostrar na tela o
produto entre eles, sendo que este cálculo deve ser realizado através de soma
sucessivas. Exemplo: 3 x 5 = 3 + 3 + 3 + 3 + 3 ou 5 + 5 + 5. */

#include <stdio.h>

int main() {
    int a, b, resultado = 0;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= b; i++) {
        resultado += a;
    }

    printf("Produto = %d\n", resultado);

    return 0;
}
