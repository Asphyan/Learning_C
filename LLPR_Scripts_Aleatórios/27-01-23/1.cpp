#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int i, num, min, max, min1, max2;
    int numero[10];

    for (i = 0; i < 10; i++) {
        printf("Insira um número: ");
        scanf("%d", &num);
        numero[i] = num;
    }

    min = numero[0];
    max = numero[0];
    min1 = 0;
    max2 = 0;

    for (i = 1; i < 10; i++) {
        if (numero[i] < min) {
            min = numero[i];
            min1 = i;
        }
        if (numero[i] > max) {
            max = numero[i];
            max2 = i;
        }
    }

    printf("\nMenor valor: %d (índice %d)\n", min, min1);
    printf("Maior valor: %d (índice %d)\n", max, max2);

    return 0;
}

