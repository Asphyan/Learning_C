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

    min = 0;
    max = 0;
    min1 = numero[0];
    max2 = numero[0];

    for (i = 1; i < 10; i++) {
        if (numero[i] < min1) {
            min = i;
            min1 = numero[i];
        }
        if (numero[i] > max2) {
            max = i;
            max2 = numero[i];
        }
    }

    printf("Menor valor: %d (elemento %d)\n", min1, min);
    printf("Maior valor: %d (elemento %d)\n", max2, max);

    return 0;
}
