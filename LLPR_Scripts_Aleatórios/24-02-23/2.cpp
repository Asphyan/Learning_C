/*[PONTEIROS/STRING] Faça um programa que receba uma string e a imprima de trás para
frente, utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	char str[100];
	char *ponteiro;
	
	printf("Digite uma string: ");
	scanf("%s", str);
	
	ponteiro = &str[strlen(str)-1];
	
	printf("String de trás para frente: ");
	while (ponteiro >= str) {
		printf("%c", *ponteiro);
		ponteiro--;
	}
	printf("\n");
	
	return 0;
}
