#include <stdio.h>
#include <stdlib.h>
int main() {
    int cont = 100;
    int contador = 0;
    int i = 50;
    
    while (i > 0) {
        if (cont%2==0) {
            contador = contador + (cont - 2);
        }
        i--;
    }
    printf("%d",contador);
    return 0;
}