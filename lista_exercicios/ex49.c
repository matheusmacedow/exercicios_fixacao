/* Foi feita uma pesquisa com um grupo de alunos de uma universidade, onde se
perguntou para cada aluno, o número de que utilizou o restaurante da
universidade, no último mês. O final é determinado quando for digitado valor
negativo para o número de vezes de uso. Construa um programa que
determine:
a) O percentual de alunos que utilizou menos de 10 vezes o restaurante;
b) O percentual de alunos que utilizou entre 10 e 15 vezes;
c) O percentual de alunos que utilizou o restaurante acima de 15 vezes;
d) O número de alunos entrevistados; */

#include <stdio.h>

int main() {

    int uso;
    int total = 0, menos10 = 0, entre10e15 = 0, acima15 = 0;

    while(1) {

        printf("Numero de vezes que utilizou o restaurante: ");
        scanf("%d", &uso);

        if(uso < 0)
            break;

        total++;

        if(uso < 10)
            menos10++;
        else if(uso <= 15)
            entre10e15++;
        else
            acima15++;
    }

    printf("Total de entrevistados: %d\n", total);

    if(total > 0){
        printf("Menos de 10: %.2f%%\n", menos10 * 100.0 / total);
        printf("Entre 10 e 15: %.2f%%\n", entre10e15 * 100.0 / total);
        printf("Acima de 15: %.2f%%\n", acima15 * 100.0 / total);
    }

    return 0;
}
