#include <stdio.h>

int main() {
    int numeros[5], i, maior;

    printf("Digite 5 numeros inteiros:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    for(i = 1; i < 5; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior numero eh: %d\n", maior);

    return 0;
}