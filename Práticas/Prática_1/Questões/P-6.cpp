#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Porrtuguese_Brazil");

    printf("ÁREA DO TRIÂNGULO\n\n");

    float base, altura, f1;

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    f1= (base*altura)/2;

    printf("\nA área do triângulo é igual a: %.3f", f1);

    return 0;
}