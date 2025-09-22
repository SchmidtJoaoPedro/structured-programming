/******************************************************************************

Explicação e exemplificação de 3 funções comuns da biblioteca <string.h>

*******************************************************************************/

// Exemplo 3 - strcmp()
//Compara duas strings. Retorna 0 se forem iguais, valor negativo se a primeira for menor, valor positivo se a primeira for maior (lexicograficamente).

#include <stdio.h>
#include <string.h>
    
int main (){
    char s1[] = "abc";
    char s2[] = "abd";

    int resultado = strcmp(s1, s2);
        if(resultado == 0) {
            printf("Strings iguais\n");
} 
        else if(resultado < 0) {
            printf("s1 é menor que s2\n");
} 
        else {
            printf("s1 é maior que s2\n");
}  

    
    return 0;
}