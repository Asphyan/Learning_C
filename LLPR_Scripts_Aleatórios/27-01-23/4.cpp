#include <stdio.h>

int main() {
    int i, a1, r, termos[10];

    printf("Insira o primeiro termo da P.G: ");
    scanf("%d", &a1);

    printf("Insira a razão da P.G: ");
    scanf("%d", &r);

    termos[0] = a1;

    for (i = 1; i < 10; i++) {
        termos[i] = termos[i-1] * r;
    }

    printf("Termos da P.G: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", termos[i]);
    }

    return 0;
}

