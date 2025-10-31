#include <stdio.h>

int main() {
    char gabarito[10], respostas[10];
    int i, acertos = 0;

    printf("Digite o gabarito da prova (10 respostas de A a D):\n");
    for(i = 0; i < 10; i++) {
        scanf(" %c", &gabarito[i]);
    }

    printf("Digite as respostas do aluno (10 respostas de A a D):\n");
    for(i = 0; i < 10; i++) {
        scanf(" %c", &respostas[i]);
    }

    for(i = 0; i < 10; i++) {
        if(respostas[i] == gabarito[i]) {
            acertos++;
        }
    }

    printf("O aluno acertou %d questoes.\n", acertos);

    return 0;
}