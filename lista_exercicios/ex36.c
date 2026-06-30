/*  Sabendo-se que são necessários dezoito watts de iluminação por metro
quadrado, ler a potência de lâmpada a ser utilizada (em watts) as dimensões de
um cômodo de residência (largura e comprimento em metros). Calcular e
imprimir o número de lâmpadas necessárias para iluminar tal cômodo. */

#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, area, wattsNecessarios;
    int potenciaLampada, quantidadeLampadas;

    printf("Digite a largura do comodo: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comprimento);

    printf("Digite a potencia da lampada em watts: ");
    scanf("%d", &potenciaLampada);

    area = largura * comprimento;
    wattsNecessarios = area * 18;

    quantidadeLampadas = ceil(wattsNecessarios / potenciaLampada);

    printf("Area do comodo = %.2f\n", area);
    printf("Watts necessarios = %.2f\n", wattsNecessarios);
    printf("Quantidade de lampadas = %d\n", quantidadeLampadas);

    return 0;
}
