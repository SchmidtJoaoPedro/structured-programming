#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    } else {
        printf("Número inválido! Não é possível calcular a raiz de número negativo.\n");
    }

    return 0;
}
