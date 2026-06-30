/*  O custo ao consumidor de um carro novo é a soma do custo de fábrica,
acrescido da porcentagem do distribuidor, mais os impostos (aplicados ao
custo de fábrica). Supondo que a porcentagem do distribuidor seja de 28% e os
impostos de 45%, ler o custo de fábrica de um carro e imprimir o custo do
consumidor */

#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

    printf("Custo ao consumidor = R$ %.2f\n", custoConsumidor);

    return 0;
}
