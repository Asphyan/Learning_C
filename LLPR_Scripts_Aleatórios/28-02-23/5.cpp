/*5 - Escreva um programa que declare uma variável real e um ponteiro para essa variável. 
Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int r;
	int *pont;
	
	printf("Digite um número: ");
	scanf("%d", &r);
	
	
	/*Duvidas nessa parte assistir a vídeo aula salva em "assistir mais tarde" (youtube)*/
	
	pont = &r;
	
	printf("\nValor apontado pelo usuário: %d\n", *pont);
	printf("--------------------------------");
	printf("\nValor (dobrado) apontado pelo usuário: %d", *pont * 2);
	
	return 0;
}
