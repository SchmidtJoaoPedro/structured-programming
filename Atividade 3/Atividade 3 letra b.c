#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 5 == 0) {
        printf("É múltiplo de 5.\n");
    } else {
        printf("Não é múltiplo de 5.\n");
    }

    return 0;
}
