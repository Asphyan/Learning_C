#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a, b, soma;
	
	printf("Somatório de números positivos.\n\n");
	printf("Primeiro número: ");
	scanf("%d", &a);
	
	while(a < 0) {
		printf("O número não pode ser negativo.\n");
		printf("Tente novamente.\n");
		printf("Primeiro número: ");
		scanf("%d", &a);
	}
	return 0;
}
