#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a, b, c, p;

	c=1;
	
	while (c == 1) {
		printf("Multiplicação de números.\n\n");
	    printf("\nPrimeiro número: ");
		scanf("%d", &a);
		printf("\nSegundo número: ");
		scanf("%d", &b);
	
		p = a * b;
		printf("Multplicação: %d\n", p);
		printf("Digite 1 para efetuar outra multiplicação: ");
		scanf("%d", &c);
	}
	return 0;
}
