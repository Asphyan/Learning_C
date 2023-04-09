/*1 - Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usu�rio e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria. */

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5];
	int *ponteiro = array;
	
	for (int i = 0; i < 5; i++) {
		printf("Digite um n�mero: ");
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		printf("\nN�mero informado: %d\n", *(ponteiro + i));
		printf("Endere�o dos n�meros: %p\n", ponteiro + i);
	}
	
	return 0;
}
