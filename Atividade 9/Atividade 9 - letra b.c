#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char resultado[400] = "";  // para armazenar frase modificada
    char *palavra;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remove o '\n' do fgets
    frase[strcspn(frase, "\n")] = '\0';

    // Quebrar frase em palavras
    palavra = strtok(frase, " ");

    while(palavra != NULL) {
        if(strcmp(palavra, "ALUNO") == 0) {
            strcat(resultado, "ESTUDANTE ");
        } else if(strcmp(palavra, "ESCOLA") == 0) {
            strcat(resultado, "UNIVERSIDADE ");
        } else {
            strcat(resultado, palavra);
            strcat(resultado, " ");
        }

        palavra = strtok(NULL, " ");
    }

    // Remove o espaço extra no final
    resultado[strlen(resultado) - 1] = '\0';

    printf("Frase modificada: %s\n", resultado);

    return 0;
}
