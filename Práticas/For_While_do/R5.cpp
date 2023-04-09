#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	printf("Escreva os 50 primeiros múltiplos de 5.\n\n");
	
	int x;
	
	for (int x=0; x <= 245; x=x+5) {
		printf("%d\t", x);
	}
	return 0;
}

