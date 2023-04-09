/*3 - Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. 
Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de atribuição direta. 
Em seguida, imprima os valores atualizados das duas variáveis.*/

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
	
	printf("Digite o primeiro número(inteiro): ");
	scanf("%d", &x);
	printf("Digite o segundo número(inteiro): ");
	scanf("%d", &y);
	
	troca (&x, &y);
	
	printf("\nTrocando os Números:\n");
	printf("\nx = %d\ny = %d", x, y);
	
	return 0;
}
