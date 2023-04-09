#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese_Bazil");
	
	printf("Conversor De Minutos Para Segundos\n\n");
	
	int min, minutos;
	
	printf("Digite os minutos a serem convertidos: ");
	scanf("%d", &min);
	
	minutos= min*60;
	
	printf("Sua Conversão foi igual a: %d", minutos);
	
	return 0;
}
