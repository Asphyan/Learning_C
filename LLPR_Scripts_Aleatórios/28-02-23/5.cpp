/*5 - Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. 
Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int r;
	int *pont;
	
	printf("Digite um n�mero: ");
	scanf("%d", &r);
	
	
	/*Duvidas nessa parte assistir a v�deo aula salva em "assistir mais tarde" (youtube)*/
	
	pont = &r;
	
	printf("\nValor apontado pelo usu�rio: %d\n", *pont);
	printf("--------------------------------");
	printf("\nValor (dobrado) apontado pelo usu�rio: %d", *pont * 2);
	
	return 0;
}
