#include <stdio.h>

int main () {
	int cont = 0;
	
	do {
		printf("Hello World");
		
		scanf("%d", &cont);
	}while (cont == 1);
}
