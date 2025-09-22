#include <stdio.h>
#include <ctype.h>  // para toupper()

int main() {
    char nome[100];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Converte cada caractere para maiúsculo
    for(int i = 0; nome[i] != '\0'; i++) {
        nome[i] = toupper(nome[i]);
    }

    printf("Nome em maiúsculas: %s", nome);

    return 0;
}