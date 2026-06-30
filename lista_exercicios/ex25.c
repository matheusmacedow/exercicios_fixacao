/*  Construa um programa que calcule a área total de uma residência (sala,
cozinha, quartos, etc., sendo todos eles retangulares). O usuário deverá entrar
com a largura (L) e o comprimento (C) de cada cômodo da casa. Em seguida
deverá ser apresentada uma pergunta, solicitando a confirmação do usuário
para continuar com a entrada de dados (a confirmação será dada quando o
usuário entrar com “1”). Quando o usuário informar “0” deve ser exibida a área
total. */

#include <stdio.h>

int main() {
    float largura, comprimento, area, areaTotal = 0;
    int continuar;

    do {
        printf("Digite a largura do comodo: ");
        scanf("%f", &largura);

        printf("Digite o comprimento do comodo: ");
        scanf("%f", &comprimento);

        area = largura * comprimento;
        areaTotal += area;

        printf("Area do comodo = %.2f\n", area);

        printf("Deseja continuar? 1-SIM / 0-NAO: ");
        scanf("%d", &continuar);

    } while(continuar == 1);

    printf("\nArea total da residencia = %.2f\n", areaTotal);

    return 0;
}
