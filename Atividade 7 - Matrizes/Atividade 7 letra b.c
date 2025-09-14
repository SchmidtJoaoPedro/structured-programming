#include <stdio.h>

int main() {
    int matriz[3][2], transposta[2][3];
    int i, j;

    printf("Digite os elementos da matriz 3x2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz Transposta (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
