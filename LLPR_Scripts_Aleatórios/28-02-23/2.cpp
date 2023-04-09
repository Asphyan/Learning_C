/*2 - Escreva um programa que solicite ao usuário que digite uma string e, 
em seguida, crie uma nova string que seja a cópia da string original, mas com todas as vogais removidas. 
O programa deve usar ponteiros para manipular as strings.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	char texto[500];
	char *ponteiro = texto;
	printf("Digite seu texto: ");
	fgets(texto, 500, stdin);

	printf("O texto digitado foi: %s", texto);
	printf("Texto sem vogais: ");
	
	for (int i = 0; ponteiro[i] != '\0'; i++) {
		if (ponteiro[i] == 'a' || ponteiro[i] == 'e' || ponteiro[i] == 'i' || ponteiro[i] == 'o' || ponteiro[i] == 'u' ||
        ponteiro[i] == 'A' || ponteiro[i] == 'E' || ponteiro[i] == 'I' || ponteiro[i] == 'O' || ponteiro[i] == 'U') {
		} else {
			printf("%c ", *(ponteiro + i));
		}
	}
	
	return 0;
}
