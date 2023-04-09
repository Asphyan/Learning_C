#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float a, b, c, f1, f2, f3, f4;

    printf("O HOMEM QUE CALCULAVA\n\n");

    printf("Digite o primeiro número a ser aplicado nas fórmulas: ");
    scanf("%f", &a);
    printf("Digite o segundo número a ser aplicado nas fórmulas: ");
    scanf("%f", &b);
    printf("Digite o segundo número a ser aplicado nas fórmulas: ");
    scanf("%f", &c);

    f1= (a*b)/c;
    f2= a*a+b+5*c;
    f3= a*b*c+b+c/3*5-1;
    f4= (a*b*c)*(a*b*c)*(a*b*c)/2;

    printf("\nFórmula-1: %.3f", f1);
    printf("\nFórmula-2: %.3f", f2);
    printf("\nFórmula-3: %.3f", f3);
    printf("\nFórmula-4: %.3f", f4);


    return 0;
}