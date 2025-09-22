#include <stdio.h>
#include <ctype.h>
#include <string.h>

void maiusculo(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char nome1[100], nome2[100];

    printf("Digite o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);

    // Remove o '\n' que fgets captura
    nome1[strcspn(nome1, "\n")] = '\0';
    nome2[strcspn(nome2, "\n")] = '\0';

    maiusculo(nome1);
    maiusculo(nome2);

    printf("Nome 1 em maiúsculas: %s\n", nome1);
    printf("Número de caracteres do nome 1: %lu\n", strlen(nome1));

    printf("Nome 2 em maiúsculas: %s\n", nome2);
    printf("Número de caracteres do nome 2: %lu\n", strlen(nome2));

    return 0;
}
