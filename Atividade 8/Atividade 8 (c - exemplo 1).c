/******************************************************************************

Explicação e exemplificação de 3 funções comuns da biblioteca <string.h>

*******************************************************************************/

// Exemplo 1 - strlen()
//Retorna o tamanho (número de caracteres) da string, sem contar o caractere nulo \0.

#include <stdio.h>
#include <string.h>
    
int main (){
    char str[] = "Exemplo";
    printf("Tamanho da string: %lu\n", strlen(str));  // Saída: 7
return 0;
}