#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("IMC\n\n");

    float peso, altura, f1, f2;

    printf("Digite sua massa(peso): ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    f1= altura*altura;
    f2= peso/f1;

    printf("\nSeu IMC é igual a: %.3f", f2);

    return 0;
}