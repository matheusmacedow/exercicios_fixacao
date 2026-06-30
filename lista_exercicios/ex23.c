/* . Tem-se um conjunto de dados de um grupo de pessoas, serão coletados a
altura e o sexo (1- masculino, 2 - feminino). O final do conjunto é determinado
quando for informada uma altura menor ou igual a zeros. Imprima:
a) A maior e a menor altura do grupo;
b) O número de homens;
c) A média de altura das mulheres;
d) O percentual de mulheres abaixo de 1,68. 
*/

#include <stdio.h>

int main() {
    float altura, maior = 0, menor = 999;
    float somaMulheres = 0;
    int sexo, homens = 0, mulheres = 0, mulheresAbaixo = 0;

    while(1) {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if(altura <= 0)
            break;

        printf("Digite o sexo (1-masculino / 2-feminino): ");
        scanf("%d", &sexo);

        if(altura > maior)
            maior = altura;

        if(altura < menor)
            menor = altura;

        if(sexo == 1) {
            homens++;
        } else if(sexo == 2) {
            mulheres++;
            somaMulheres += altura;

            if(altura < 1.68)
                mulheresAbaixo++;
        }
    }

    printf("\nMaior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Numero de homens: %d\n", homens);

    if(mulheres > 0) {
        printf("Media de altura das mulheres: %.2f\n", somaMulheres / mulheres);
        printf("Percentual de mulheres abaixo de 1.68: %.2f%%\n", (mulheresAbaixo * 100.0) / mulheres);
    }

    return 0;
}
