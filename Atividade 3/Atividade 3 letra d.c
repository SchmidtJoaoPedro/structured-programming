#include <stdio.h>

int main() {
    int pessoas;

    printf("Digite a quantidade de pessoas no estádio: ");
    scanf("%d", &pessoas);

    if (pessoas < 1000) {
        printf("Público baixo.\n");
    } else if (pessoas >= 1001 && pessoas <= 10000) {
        printf("Público médio.\n");
    } else {
        printf("Público bom.\n");
    }

    return 0;
}
