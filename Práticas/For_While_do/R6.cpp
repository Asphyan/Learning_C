#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calcule a m�dia de duas notas. Ao final, se o usu�rio pedir para continuar, repita o programa.\n\n");
	
	float a, b, c, p;
	
	c=1;
	
	while (c == 1) {
		printf("Calculadora de M�dia.\n\n");
	    printf("\nPrimeira Nota: ");
		scanf("%f", &a);
		printf("\nSegunda Nota: ");
		scanf("%f", &b);
	
		p = (a + b)/2;
		printf("M�dia: %f\n", p);
		printf("Digite ->\t 1 - Executar Novamente \t 0 - Encerrar: ");
		scanf("%f", &c);
	}
	return 0;
}
