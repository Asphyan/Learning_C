#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a, b, c, p;

	c=1;
	
	while (c == 1) {
		printf("Multiplica��o de n�meros.\n\n");
	    printf("\nPrimeiro n�mero: ");
		scanf("%d", &a);
		printf("\nSegundo n�mero: ");
		scanf("%d", &b);
	
		p = a * b;
		printf("Multplica��o: %d\n", p);
		printf("Digite 1 para efetuar outra multiplica��o: ");
		scanf("%d", &c);
	}
	return 0;
}
