#include <stdio.h>
#include <locale.h>

int main() {
    printf("TAXA POR EXCESSO DE COMPRAS EUA\n\n");

    float peso, f1, f2;

    printf("Digite o peso da bagagem: ");
    scanf("%f", &peso);

    f1= peso-500;
    f2= f1/2;

    if (peso > 500) {
        printf("Suas compras ultrapassaram $500\n\nVocê deverá pagar uma taxa de: %.3f", f2);
    }
    if (peso <= 500) {
        printf("Suas compras não ultrapassaram $500\n\nVocê está isento de taxas!");
    }
    return 0;
}