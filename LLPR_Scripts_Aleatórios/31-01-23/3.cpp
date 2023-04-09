#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char texto[500];
	printf("Digite seu texto: ");
	fgets(texto, 500, stdin);

	for (int i = 0; texto[i] != '\0'; i++) {
		if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
        texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U') {
        	printf("%c ", texto[i]);
		}
	}
	return 0;
}
