#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("PARQUE DE DIVERSÕES!!! ALTURA E PESO MÍNIMOS.\n\n");

    float altura, peso;

    printf("Digite sua altura (com a vírgula): ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if ((altura >= 1.70) && (peso >= 55)) {
        printf("Sua altura está os conformes.\n");
        printf("Seu peso está nos conformes.");
    }
    if (peso < 55) {
    printf("Seu peso não está nos conformes.\n");
    }
    if (altura < 1.70) {
    printf("Sua altura não está nos conformes.\n");
    }
    return 0;
}