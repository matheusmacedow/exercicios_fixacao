/* Seja N um número quadrado perfeito. Se somarmos os números ímpares
consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N, o número M de
termos somados será igual a raiz quadrada de N. Exemplo: N = 16 16 = 1 + 3 + 5
+ 7 M = 4 termos. Logo, a raiz quadrada de 16 é 4. Devem ser solicitados vários
números. O programa deve ser finalizado quando for informado N zero. */

#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite um numero quadrado perfeito ou 0 para sair: ");
        scanf("%d", &n);

        if(n == 0)
            break;

        int soma = 0, impar = 1, termos = 0;

        while(soma < n) {
            soma += impar;
            impar += 2;
            termos++;
        }

        if(soma == n)
            printf("Raiz quadrada de %d = %d\n", n, termos);
        else
            printf("%d nao e quadrado perfeito.\n", n);

    } while(n != 0);

    return 0;
}
