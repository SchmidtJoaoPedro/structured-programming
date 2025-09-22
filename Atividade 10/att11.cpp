#define _CRT_SECURY_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
// A variável TEXTO1 recebe a cadeia
// de caracteres: PROGRAMA DE COMPUTADOR
char TEXTO1[] = "PROGRAMA DE COMPUTADOR";
// A linha abaixo altera a primeira letra da cadeia
// armazenada na variável TEXTO1 para T
TEXTO1[0] = 'T';
// Mostra o conteúdo da variável TEXTO1
printf("\nNova cadeia TEXTO1 = %s\n", TEXTO1);
system("pause");
}