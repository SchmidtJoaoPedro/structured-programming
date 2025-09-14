#include <stdio.h>

int main() {
    int i;
    printf("Os 20 primeiros números pares:\n");
    for (i = 1; i <= 20; i++) {
        printf("%d ", 2 * i);
    }
    printf("\n");
    return 0;
}
