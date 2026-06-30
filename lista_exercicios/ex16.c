// Ler a idade de três indivíduos e imprimir a média de idade deles

#include <stdio.h>

int main() {
    int idade1, idade2, idade3;
    float media;

    printf("Digite tres idades: ");
    scanf("%d %d %d", &idade1, &idade2, &idade3);

    media = (idade1 + idade2 + idade3) / 3.0;

    printf("Media das idades = %.2f\n", media);

    return 0;
}
