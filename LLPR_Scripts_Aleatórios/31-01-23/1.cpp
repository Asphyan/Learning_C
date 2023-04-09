#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	char texto [500];
	
	printf("Digite seu texto: ");
	gets(texto);
	
	printf("%s", texto);
	
	return 0;
}
