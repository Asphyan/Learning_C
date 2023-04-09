#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	char c[50];
	
	printf("Digite sua frase: ");
	gets(c);
	
	puts(c);
	
	return 0;
}
