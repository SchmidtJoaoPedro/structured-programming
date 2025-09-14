#include <stdio.h>

int main() {
    int vendas[4][5];
    int i, j, total = 0;

    printf("Digite as vendas (4 trimestres x 5 regioes):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &vendas[i][j]);
            total += vendas[i][j];
        }
    }

    printf("Quantidade total vendida: %d\n", total);

    return 0;
}
