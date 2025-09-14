#include <stdio.h>

int main() {
    float altura, maiorAltura = 0.0;
    int contador = 0;

    while (contador < 10) {
        printf("Digite a altura da pessoa %d: ", contador + 1);
        scanf("%f", &altura);

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        contador++;
    }

    printf("A maior altura digitada foi: %.2f\n", maiorAltura);

    return 0;
}
