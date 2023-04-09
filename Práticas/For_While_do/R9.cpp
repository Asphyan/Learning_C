#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, cont;
	float media;
	
	do {
		printf("\n\nCALCULAR MÉDIA\n\n");
		
		printf("\nDigite N1: ");
		scanf("%d", &n1);
		printf("\nDigite N2: ");
		scanf("%d", &n2);
		
		media = (float) (n1+n2)/2; //Type Casting
		printf("\nMédia = %.2f", media);
		
		printf("\n\nDigite 1 - Continuar// 0 - Encerrar: ");
		scanf("%d", &cont);
	} while (cont == 1);
	
	return 0;
}
