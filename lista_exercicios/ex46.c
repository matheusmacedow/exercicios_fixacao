// Ler as coordenadas de dois pontos no plano, (X1, Y1) e (X2, Y2). Calcular e imprimir a distância euclidiana entre eles

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite X1 e Y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite X2 e Y2: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    printf("Distancia = %.2f\n", distancia);

    return 0;
}
