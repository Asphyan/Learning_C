#include <stdio.h>
#include <locale.h>

int main () {
	int x = 3;
	char c = 'a';
	int y[3] = {1,2,3};
	int * p;
	
	p = &x;
	
	printf("%d", p);
	
	return 0;
}
