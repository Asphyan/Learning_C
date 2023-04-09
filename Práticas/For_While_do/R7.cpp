#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculadora de fatorial.\n\n");
	
	int a;
	
	scanf("%d", &a);
	
	for (int x = 1; a > 1; a--) {
		x=x*a;
		printf("%d.", x);
	}
	return 0;
}
