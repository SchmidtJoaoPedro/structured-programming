#include <stdio.h>

int main()
{    float TEMP;
    printf("digite a TEMPERATURA: ");
    scanf("%f",&TEMP);
    if (TEMP<=37)
    printf("%.1f voce nao tem febre",TEMP);
    else {
        printf("%.1f voce tem febre",TEMP);
    }

    return 0;
}