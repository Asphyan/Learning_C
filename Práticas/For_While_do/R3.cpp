#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a, b, soma;
	
	printf("Somat�rio de n�meros positivos.\n\n");
	printf("Primeiro n�mero: ");
	scanf("%d", &a);
	
	while(a < 0) {
		printf("O n�mero n�o pode ser negativo.\n");
		printf("Tente novamente.\n");
		printf("Primeiro n�mero: ");
		scanf("%d", &a);
	}
	return 0;
}
