/* Elabore um programa que imprima a tabuada dos números solicitados pelo
usuário. Você deve perguntar se o usuário deseja continuar (1-SIM ou 0-NÃO). */

#include <stdio.h>

int main() {
    int num, continuar;

    do {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &num);

        for(int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }

        printf("\nDeseja continuar? 1-SIM / 0-NAO: ");
        scanf("%d", &continuar);

    } while(continuar == 1);

    return 0;
}
