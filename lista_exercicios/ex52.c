/* Elabore um programa que leia informações de uma pesquisa de um grupo de
pessoas, obtendo as seguintes informações: idade, salário bruto e se já teve
algum acidente de trabalho (1-Sim / 0- Não). O final da leitura deve acontecer
quando for digitado um valor de salário bruto negativo. Para salário bruto
acima de R$ 1500,00 é descontado o IR de 10% sobre o salário bruto, obtendose o salário líquido. Para valores menores ou iguais a R$ 1500,00 o salário
líquido será o próprio salário bruto
a) Calcular e imprimir a média de idade das pessoas que já sofreram
acidente de trabalho;
b) Imprimir o total de salários líquidos (em R$) pagos pela empresa. */

#include <stdio.h>

int main() {

    int idade, acidente;
    float salarioBruto, salarioLiquido;

    int pessoasAcidente = 0;
    int somaIdades = 0;
    float totalSalarios = 0;

    while(1){

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Salario bruto: ");
        scanf("%f", &salarioBruto);

        if(salarioBruto < 0)
            break;

        printf("Ja sofreu acidente? (1-Sim / 0-Nao): ");
        scanf("%d", &acidente);

        if(salarioBruto > 1500)
            salarioLiquido = salarioBruto * 0.90;
        else
            salarioLiquido = salarioBruto;

        totalSalarios += salarioLiquido;

        if(acidente == 1){
            pessoasAcidente++;
            somaIdades += idade;
        }
    }

    if(pessoasAcidente > 0)
        printf("\nMedia de idade: %.2f\n", (float)somaIdades / pessoasAcidente);

    printf("Total de salarios liquidos: R$ %.2f\n", totalSalarios);

    return 0;
}
