/*[PONTEIROS] Crie um programa que declare uma vari�vel inteira e um ponteiro para
essa vari�vel. Atribua um valor a vari�vel e imprima o valor dela e o endere�o de
mem�ria correspondente, utilizando o ponteiro*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	int *ponteiro = &num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	printf("\nValor da vari�vel: %d\n", num);
	printf("Endere�o de mem�ria da vari�vel: %p\n", &num);
	printf("Valor do ponteiro: %p\n", ponteiro);
	printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
	
	return 0;
}
