/*1 - Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endereço de memória. */

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5];
	int *ponteiro = array;
	
	for (int i = 0; i < 5; i++) {
		printf("Digite um número: ");
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		printf("\nNúmero informado: %d\n", *(ponteiro + i));
		printf("Endereço dos números: %p\n", ponteiro + i);
	}
	
	return 0;
}
