//  Calcular e imprimir a média aritmética de 5 notas.

#include <stdio.h>

int main() {
    float nota, soma = 0, media;

    for(int i = 1; i <= 5; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / 5;

    printf("Media = %.2f\n", media);

    return 0;
}
