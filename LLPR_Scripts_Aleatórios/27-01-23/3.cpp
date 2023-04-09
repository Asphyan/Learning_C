#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int i, a1, r, termos[10];

    printf("Insira o primeiro termo da P.A: ");
    scanf("%d", &a1);

    printf("Insira a razão da P.A: ");
    scanf("%d", &r);

    termos[0] = a1;

    for (i = 1; i < 10; i++) {
        termos[i] = termos[i-1] + r;
    }

    printf("Termos da P.A: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", termos[i]);
    }

    return 0;
}

