#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 67) {
        printf("Pode doar sangue.\n");
    } else {
        printf("Não pode doar sangue.\n");
    }

    return 0;
}
