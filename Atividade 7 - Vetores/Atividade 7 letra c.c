#include <stdio.h>

int main() {
    int vetor[8];
    int i, j, num;

    printf("Digite 8 numeros inteiros:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &num);

        // inserção ordenada
        j = i - 1;
        while(j >= 0 && vetor[j] > num) {
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = num;
    }

    printf("Vetor em ordem crescente:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}