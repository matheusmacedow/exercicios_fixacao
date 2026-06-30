/*  Faça um programa que leia a quantidade de dias de permanência no hotel de
cada hóspede. Sabe-se que o valor da diária é R$ 150,00. Aplique as regras da
tabela abaixo para determinar o valor a pagar por cada hóspede. Para finalizar
deve ser informado zeros para a quantidade de diárias */

#include <stdio.h>

int main() {
    int diarias;
    int hospedesMais20 = 0, totalHospedes = 0;
    float valor, desconto, somaContas = 0, somaDias = 0, maiorConta = 0;

    while(1) {
        printf("Digite a quantidade de diarias ou 0 para sair: ");
        scanf("%d", &diarias);

        if(diarias == 0)
            break;

        valor = diarias * 150.0;

        if(diarias <= 5)
            desconto = valor * 0.05;
        else if(diarias <= 10)
            desconto = valor * 0.10;
        else
            desconto = valor * 0.15;

        valor -= desconto;

        printf("Valor a pagar: R$ %.2f\n", valor);

        if(diarias > 20)
            hospedesMais20++;

        if(valor > maiorConta)
            maiorConta = valor;

        somaContas += valor;
        somaDias += diarias;
        totalHospedes++;
    }

    printf("\nHospedes com mais de 20 dias: %d\n", hospedesMais20);

    if(totalHospedes > 0) {
        printf("Media das contas: R$ %.2f\n", somaContas / totalHospedes);
        printf("Media de dias: %.2f\n", somaDias / totalHospedes);
        printf("Maior conta paga: R$ %.2f\n", maiorConta);
    }

    return 0;
}
