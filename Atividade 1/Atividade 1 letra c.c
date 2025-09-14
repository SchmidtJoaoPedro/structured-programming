#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite x1: ");
    scanf("%f", &x1);
    printf("Digite y1: ");
    scanf("%f", &y1);
    printf("Digite x2: ");
    scanf("%f", &x2);
    printf("Digite y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distancia entre os pontos eh: %.2f\n", distancia);

    return 0;
}