#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float notas[50];
	
	for (int indice = 0; indice < 5; indice++) {
		
		printf("Digite a %da nota: ", indice + 1);
		scanf("%f", &notas[indice]);
	}
	
	for (int i = 0; i < 5; i++) {
		
		printf("Mostrando a nota %d: %.2f\n", i + 1, notas[i]);
	}
	
	return 0;
}
