/* Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados
de altura e sexo (0=masc, 1=fem) das pessoas. Faça um programa que leia 50
dados diferentes e informe:
a) A média de altura das mulheres;
b) A média de altura da população;
c) O percentual de homens na população;
d) A quantidade de mulheres;
e) O percentual das mulheres abaixo de 1.65 m */

#include <stdio.h>

int main() {
    float altura, somaMulheres = 0, somaPopulacao = 0;
    int sexo;
    int mulheres = 0, homens = 0, mulheresAbaixo = 0;

    for(int i = 1; i <= 50; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Digite o sexo (0-masc / 1-fem): ");
        scanf("%d", &sexo);

        somaPopulacao += altura;

        if(sexo == 0) {
            homens++;
        } else if(sexo == 1) {
            mulheres++;
            somaMulheres += altura;

            if(altura < 1.65)
                mulheresAbaixo++;
        }
    }

    if(mulheres > 0)
        printf("Media de altura das mulheres: %.2f\n", somaMulheres / mulheres);

    printf("Media de altura da populacao: %.2f\n", somaPopulacao / 50);
    printf("Percentual de homens: %.2f%%\n", (homens * 100.0) / 50);
    printf("Quantidade de mulheres: %d\n", mulheres);

    if(mulheres > 0)
        printf("Percentual de mulheres abaixo de 1.65: %.2f%%\n", (mulheresAbaixo * 100.0) / mulheres);

    return 0;
}
