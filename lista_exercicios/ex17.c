//  Ler os lados de um triângulo retângulo e calcular a hipotenusa

#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Digite os dois catetos: ");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("Hipotenusa = %.2f\n", hipotenusa);

    return 0;
}
