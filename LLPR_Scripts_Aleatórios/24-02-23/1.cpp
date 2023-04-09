/*[PONTEIROS] Crie um programa que declare uma variável inteira e um ponteiro para
essa variável. Atribua um valor a variável e imprima o valor dela e o endereço de
memória correspondente, utilizando o ponteiro*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num;
	int *ponteiro = &num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("\nValor da variável: %d\n", num);
	printf("Endereço de memória da variável: %p\n", &num);
	printf("Valor do ponteiro: %p\n", ponteiro);
	printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
	
	return 0;
}
