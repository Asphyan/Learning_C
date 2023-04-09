#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float notas[50], soma = 0;
	
	for (int indice = 0; indice < 5; indice++) {
		
		printf("Digite a %da nota: ", indice + 1);
		scanf("%f", &notas[indice]);
		soma = soma + notas[indice];
	}
	printf("Mostrar média geral: %.2f", (soma/5));
	
	return 0;
}
