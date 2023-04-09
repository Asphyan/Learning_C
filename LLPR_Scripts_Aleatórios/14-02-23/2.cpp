#include <stdio.h>
#include <locale.h>

int main () {
	int a, b, *p1, *p2;
	
	a = 4;
	b = 3;
	p1 = &a;
	p2 = p1;
	*p2 = *p1 + 3;
	b = b * (*p1);
	(*p2)++;
	p1 = &b;
	
	printf("p1 = %d, p2 = %d", p1, p2);
	printf("a = %d, b = %d", a, b);
	
	return 0;
}
