// A Empresa “Sempre Venda” remunera seus 1200 funcionários com salário fixo mais comissão, conforme a tabela abaixo:

#include <stdio.h>

int main() {
    int quantidade;
    float salarioFixo, salarioFinal;
    float somaSalarios = 0, maiorSalario = 0;

    for(int i = 1; i <= 1200; i++) {

        printf("Funcionario %d\n", i);

        printf("Quantidade de produtos: ");
        scanf("%d", &quantidade);

        printf("Salario fixo: ");
        scanf("%f", &salarioFixo);

        if(quantidade <= 5)
            salarioFinal = salarioFixo + quantidade * 1.50;
        else if(quantidade <= 50)
            salarioFinal = salarioFixo + quantidade * 2.00;
        else
            salarioFinal = salarioFixo + quantidade * 2.50;

        printf("Salario = %.2f\n", salarioFinal);

        somaSalarios += salarioFinal;

        if(salarioFixo > maiorSalario)
            maiorSalario = salarioFixo;
    }

    printf("\nMedia salarial = %.2f\n", somaSalarios / 1200);
    printf("Maior salario fixo = %.2f\n", maiorSalario);

    return 0;
}
