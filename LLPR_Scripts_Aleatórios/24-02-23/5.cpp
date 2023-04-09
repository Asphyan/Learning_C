/*[PONTEIROS/STRING] Escreva um programa que leia uma string e conte quantas vezes
uma determinada letra aparece na string, utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
	char str[100];
	char letra;
	char *ponteiro;
	int contador = 0;
	
	printf("Digite uma string: ");
	gets(str);
	
	printf("Digite uma letra para contar: ");
	gets(&letra);
	
	ponteiro = str;
	while (*ponteiro != '\0') {
		if (*ponteiro == letra) {
			contador++;
		}
		ponteiro++;
	}
	
	printf("A letra '%c' apareceu %d vezes na string.\n", letra, contador);
	
	return 0;
}

