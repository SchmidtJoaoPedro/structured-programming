#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Atencessor: %d\n", num -1);
    printf("Numero: %d\n", num);
    printf("Sucessor: %d\n", num +1);
    
    return 0;
}