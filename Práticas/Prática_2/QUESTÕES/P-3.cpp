#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("IDADE PAR OU ÍMPAR?\n\n");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade%2 != 0) {
        printf("Sua idade é ímpar.");
    }
    if (idade%2 == 0) {
        printf("Sua idade é par.");;
    }
    return 0;
}