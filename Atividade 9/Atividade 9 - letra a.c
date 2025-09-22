#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    int cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Percorrer cada caractere da frase
    for(int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        // Verifica se é vogal (maiúscula ou minúscula)
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cont++;
        }
    }

    printf("Quantidade de vogais na frase: %d\n", cont);

    return 0;
}
