/* Faça um programa que desenhe um retângulo usando o caracter ‘*’. Devem ser
lidos dois parâmetros, linhas e colunas, sendo que o valor por omissão é o valor
mínimo igual a 1 e o valor máximo é 20. Se valores fora da faixa forem
informados, eles devem ser convertidos para os valores permitidos. */

#include <stdio.h>

int main() {

    int linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);

    printf("Colunas: ");
    scanf("%d", &colunas);

    if(linhas < 1) linhas = 1;
    if(linhas > 20) linhas = 20;

    if(colunas < 1) colunas = 1;
    if(colunas > 20) colunas = 20;

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= colunas; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
