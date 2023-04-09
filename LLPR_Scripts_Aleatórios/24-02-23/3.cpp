/*[PONTEIROS] Escreva um programa que leia dois números inteiros e troque seus valores
utilizando ponteiros.*/

#include <stdio.h>
#include <locale.h>

void troca (int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num1, num2;
	
	printf("Digite dois números inteiros: ");
	scanf("%d %d", &num1, &num2);
	
	printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);
	
	troca(&num1, &num2);
	
	printf("\nDepois da troca: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
