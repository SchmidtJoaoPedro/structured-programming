#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    char invertida[100];
    int len, i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    len = strlen(palavra);

    // Criar a palavra invertida
    for(i = 0; i < len; i++) {
        // copiar caracteres invertidos
        invertida[i] = palavra[len - 1 - i];
    }
    invertida[len] = '\0';

    // Comparar as duas palavras (ignorando maiúsculas/minúsculas)
    // Vamos converter ambas para maiúsculas para garantir
    for(i = 0; i < len; i++) {
        palavra[i] = toupper(palavra[i]);
        invertida[i] = toupper(invertida[i]);
    }

    if(strcmp(palavra, invertida) == 0) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}

