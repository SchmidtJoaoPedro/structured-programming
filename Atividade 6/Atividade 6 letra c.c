#include <stdio.h>

int main() {
    float largura, comprimento, area_comodo, area_total = 0;
    char continuar;

    for (;;) {
        printf("Digite a largura do cômodo (em metros): ");
        scanf("%f", &largura);

        printf("Digite o comprimento do cômodo (em metros): ");
        scanf("%f", &comprimento);

        area_comodo = largura * comprimento;
        area_total += area_comodo;

        do {
            printf("Deseja adicionar outro cômodo? (S/N): ");
            scanf(" %c", &continuar);
        } while (continuar != 'S' && continuar != 'N');

        if (continuar == 'N') {
            break;
        }
    }

    printf("Área total da residência: %.2f metros quadrados.\n", area_total);

    return 0;
}
