#include <stdio.h>
#include <locale.h>

void func (int *px, int *py) {
	px = py;
	*px = (*px) * (*py);
	*px = *px + 2;
}

int main () {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	func(&x, &y);
	printf("x = %d, y = %d", x, y);
}
