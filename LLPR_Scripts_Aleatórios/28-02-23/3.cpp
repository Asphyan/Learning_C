/*3 - Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. 
Utilizando ponteiros, troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar operadores de atribui��o direta. 
Em seguida, imprima os valores atualizados das duas vari�veis.*/

#include <stdio.h>
#include <locale.h>

void troca (int *x, int *y) {
	
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, y;
	
	printf("Digite o primeiro n�mero(inteiro): ");
	scanf("%d", &x);
	printf("Digite o segundo n�mero(inteiro): ");
	scanf("%d", &y);
	
	troca (&x, &y);
	
	printf("\nTrocando os N�meros:\n");
	printf("\nx = %d\ny = %d", x, y);
	
	return 0;
}
