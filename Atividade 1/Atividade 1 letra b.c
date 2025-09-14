#include <stdio.h>

int main() {
    int num;
    float tercaparte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    tercaparte = num / 3.0;  // usa 3.0 para divisão real
    printf("A terca parte de %d eh: %.2f\n", num, tercaparte);

    return 0;
}