/*[PONTEIROS] Crie uma função que receba dois inteiros por referência e retorne a soma
desses valores.*/

#include <stdio.h>
#include <locale.h>

int soma (int *a, int *b) {
	return *a + *b;
}

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num1, num2;
	
	printf("Digite dois números inteiros: ");
	scanf("%d %d", &num1, &num2);
	
	printf("A soma de %d + %d = %d\n", num1, num2, soma(&num1, &num2));
	
	return 0;
}
