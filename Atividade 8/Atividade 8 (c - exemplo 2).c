/******************************************************************************

Explicação e exemplificação de 3 funções comuns da biblioteca <string.h>

*******************************************************************************/

// Exemplo 2 - strcpy()
//Copia o conteúdo de uma string para outra.

#include <stdio.h>
#include <string.h>
    
int main (){
    char origem[] = "Origem";
    char destino[20];
    strcpy(destino, origem);
    printf("Destino: %s\n", destino);  // Saída: Origem
    
    return 0;
}
