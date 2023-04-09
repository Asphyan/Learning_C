#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, cont;
	float r;
	
	do {
		system("cls");
		printf("\n\nCALCULADORA - MEMES\n\n");
		printf("1 - Soma\n");
		printf("2 - Multiplicação\n");
		printf("3 - Divisão\n");
		printf("4 - Subtração\n");
		printf("\nEscolha a Operação: ");
		scanf("%d", &cont);
		system("cls");
		
		printf("\nDigite o primeiro valor: ");
		scanf("%d", &n1);
		printf("\nDigite o segundo valor: ");
		scanf("%d", &n2);
		
		if (cont == 1) {
			r = n1 + n2;
		} else if (cont == 2) {
			r = n1 * n2;
		} else if (cont == 3) {
			r = (float) n1 / n2;			
		} else if (cont == 4) {
			r = n1 - n2;
		} else if (cont != 0) {
			printf("\nOperação Inválida. Tente Novamente!");
		}
		printf("Resultado: %.2f", r);
		printf("\n\nDeseja continuar? 1 - Sim 0 - Não: ");
		scanf("%d", &cont);
	} while(cont != 0);
	
	return 0;
}
