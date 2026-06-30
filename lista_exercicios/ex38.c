/*  Uma empresa tem para um determinado funcionário os dados a seguir:
• NOME DO FUNCIONÁRIO
• NÚMERO DE HORAS QUE ELE TRABALHA
• NÚMERO DE DEPENDENTES
a) Considere que a empresa paga R$3,00 por hora R$100,00 por dependente.
São feitos descontos de 13,5% sobre o salário/trabalho. Faça um algoritmo
que imprima o nome do funcionário e o seu salário líquido */

#include <stdio.h>

int main() {
    char nome[50];
    float horas, salarioBruto, salarioLiquido;
    int dependentes;

    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", nome);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    salarioBruto = (horas * 3.00) + (dependentes * 100.00);
    salarioLiquido = salarioBruto - (salarioBruto * 0.135);

    printf("Funcionario: %s\n", nome);
    printf("Salario liquido = R$ %.2f\n", salarioLiquido);

    return 0;
}
