#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculadora\n\n");
	
	float n1, n2, soma, sub, div, mult;
	
	printf("Digite o primeiro n�mero para as opera��es serem efetuadas: ");
	scanf("%f", &n1);
	printf("Digite o segundo n�mero para as opera��es serem efetuadas: ");
	scanf("%f", &n2);
	
	soma= n1+n2;
	sub= n1-n2;
	div= n1/n2;
	mult= n1*n2;
	
	printf("\nSoma igual a: %.3f", soma);
	printf("\nSubtra��o igual a: %.3f", sub);
	printf("\nDivis�o igual a: %.3f", div);
	printf("\nMultiplica��o Igual a: %.3f", mult);
	
	return 0;
}
