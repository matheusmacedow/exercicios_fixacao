/* Um motorista anota a quilometragem (odômetro) do seu veículo antes e
depois de cada viagem, bem como os litros de combustível gasto. Ler esses três
dados e o preço do combustível e imprimir:
a) A quilometragem rodada
b) Quantos quilômetros por litro faz o veículo
c) O custo da viagem */

#include <stdio.h>

int main() {
    float kmAntes, kmDepois, litros, precoCombustivel;
    float kmRodado, kmPorLitro, custoViagem;

    printf("Digite a quilometragem antes da viagem: ");
    scanf("%f", &kmAntes);

    printf("Digite a quilometragem depois da viagem: ");
    scanf("%f", &kmDepois);

    printf("Digite os litros de combustivel gastos: ");
    scanf("%f", &litros);

    printf("Digite o preco do combustivel: ");
    scanf("%f", &precoCombustivel);

    kmRodado = kmDepois - kmAntes;
    kmPorLitro = kmRodado / litros;
    custoViagem = litros * precoCombustivel;

    printf("Quilometragem rodada = %.2f km\n", kmRodado);
    printf("Km por litro = %.2f\n", kmPorLitro);
    printf("Custo da viagem = R$ %.2f\n", custoViagem);

    return 0;
}
