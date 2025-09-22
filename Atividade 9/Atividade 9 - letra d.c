#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            frase[i] = '*';
        }
    }

    printf("Frase criptografada: %s", frase);

    return 0;
}
