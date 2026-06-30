//  Imprimir a tabuada do número 4.

#include <stdio.h>

int main() {

    printf("Tabuada do 4\n\n");

    for(int i = 1; i <= 10; i++) {
        printf("4 x %d = %d\n", i, 4 * i);
    }

    return 0;
}
