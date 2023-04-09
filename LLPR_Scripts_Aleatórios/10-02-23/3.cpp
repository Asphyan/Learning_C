#include <stdio.h>

int main () {
	int a = 1, b = 2, aux;
	
	aux = a;
	a = b;
	b = aux;
	
	printf("a=%d, b=%d", a, b);
	
	return 0;
}
