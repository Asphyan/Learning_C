/*4 - Escreva um programa que solicite ao usu�rio que digite um n�mero inteiro positivo n. 
Em seguida, crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores inteiros informados pelo usu�rio. 
Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor e percorra o vetor utilizando esse ponteiro, 
imprimindo na tela os valores dos elementos do vetor em ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n, *vet;
	
	printf("Digite um n�mero de vezes que quer digitar: ");
	scanf("%d", &n);
	
	/*Alocando vetor de maneira dinamica (Caso esque�a assistir v�deo aula salva em "assistir mais tarde (youtube)"*/
	
	vet = (int*)malloc(n * sizeof(int));
	
	for(int i = 0; i < n; i++) {
		printf("Digite um n�mero inteiro - %d: ", i + 1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nN�meros de forma inversa: \n");
	
	for(int i = n - 1; i >= 0; i--) {
		printf("%d ", *(vet+i));
	}
	
	/*Vai liberar a mem�ria alocada no vetor*/
	
	free(vet);
	
	return 0;
}
