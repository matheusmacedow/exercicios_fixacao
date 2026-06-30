/* Uma bola é solta de uma altura H sobre uma superfície lisa. Essa bola fica
saltando sobre a superfície lisa durante um determinado tempo. É assumido
que a bola toca a superfície lisa sempre no mesmo ponto. A distância
percorrida pela bola é a soma de todos os movimentos ascendentes e
descendentes que a bola realiza até o seu momento total de parada. A cada
salto, a bola sobe a uma altura máxima calculada pelo produto da altura do
salto, exatamente anterior, pelo fator R (0 < R < 1) denominado coeficiente de
salto. Solicita-se a elaboração de um programa que tenha como entradas os
valores de H e R, e um certo número inteiro N. Em seguida o programa deve
calcular a distância percorrida pela bola até o término do n-ésimo salto e
também a altura do n-ésimo salto.*/

#include <stdio.h>

int main() {

    float H, R;
    int N;

    printf("Altura inicial: ");
    scanf("%f", &H);

    printf("Coeficiente de salto: ");
    scanf("%f", &R);

    printf("Numero de saltos: ");
    scanf("%d", &N);

    float distancia = H;
    float altura = H;

    for(int i = 1; i <= N; i++) {
        altura *= R;
        distancia += altura * 2;
    }

    printf("Distancia percorrida = %.2f\n", distancia);
    printf("Altura do ultimo salto = %.2f\n", altura);

    return 0;
}
