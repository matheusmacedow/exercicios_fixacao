/* Uma revendedora de carros usados paga a seus funcionários um salário fixo por
mês e uma comissão também fixa por cada carro vendido e mais 5% do valor
das vendas por ele efetuadas. Ler o número do vendedor, o nome do vendedor,
o número de carros vendidos por ele, o valor total de suas vendas, o salário fixo
e o valor que recebe por carro vendido. Ao final, calcular e imprimir o salário
mensal do vendedor, juntamente com seu código de vendedor e nome */

#include <stdio.h>

int main() {
    int codigo, carrosVendidos;
    char nome[50];
    float salarioFixo, valorVendas, valorPorCarro, salarioFinal;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    printf("Nome: ");
    scanf(" %[^\n]", nome);

    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Valor total das vendas: ");
    scanf("%f", &valorVendas);

    printf("Salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Comissao por carro: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (carrosVendidos * valorPorCarro) + (valorVendas * 0.05);

    printf("\nCodigo: %d", codigo);
    printf("\nNome: %s", nome);
    printf("\nSalario Final: R$ %.2f", salarioFinal);

    return 0;
}
