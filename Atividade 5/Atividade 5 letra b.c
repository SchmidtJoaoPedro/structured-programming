#include <stdio.h>
#include <math.h>

int main() {
    int N, P;
    int i = 0;
    double resultado;
    
    printf("Digite a base (N): ");
    scanf("%d", &N);
    printf("Digite o expoente máximo (P): ");
    scanf("%d", &P);

    do {
        resultado = pow(N, i);
        printf("%d elevado a %d = %.0f\n", N, i, resultado);
        i++;
    } while(i <= P);

    return 0;
}
