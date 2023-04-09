#include <stdio.h>
#include <locale.h>

void troca (int *a, int *b, int *c) {
	if(a > b || a > c) {
		if (b < c) {
			troca (&a, &b);
		} else {
			troca(&a, &c);
		}
		if (b > c) {
			troca(&b, &c);
		}
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1; 
	int num2;
	int num3;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	printf("Digite o segundo número: ");
	scanf("%d", &num3);
	troca(&a, &b, &c);
	
	printf("Num1 = %d, Num2 = %d, Num3 = %d\n", num1, num2, num3);
	
	return 0;
}
