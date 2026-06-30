/*  Ler a quantidade de anos que um fumante já fuma, o número de cigarros que
fuma por dia, e o preço de uma carteira de cigarros e calcular a quantidade de
dinheiro que esse fumante já gastou. Imprimir o resultado */ 

#include <stdio.h>

int main() {
    int anos, cigarrosPorDia;
    float precoCarteira, totalGasto;
    int totalCigarros, carteiras;

    printf("Digite ha quantos anos fuma: ");
    scanf("%d", &anos);

    printf("Digite quantos cigarros fuma por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Digite o preco da carteira de cigarros: ");
    scanf("%f", &precoCarteira);

    totalCigarros = anos * 365 * cigarrosPorDia;
    carteiras = totalCigarros / 20;

    totalGasto = carteiras * precoCarteira;

    printf("Total gasto = R$ %.2f\n", totalGasto);

    return 0;
}
