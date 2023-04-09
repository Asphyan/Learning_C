#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("IDADE PAR + DOBRO E METADE OU APENAS ÍMPAR?\n\n");

    int idade, dobro, metade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    dobro= idade*2;
    metade= idade/2;

    if (idade%2 != 0) {
        printf("Sua idade é ímpar.");
    }
    if (idade%2 == 0) {
        printf("Sua idade é par.\n");
        printf("O dobro da sua idade é: %d\n", dobro);
        printf("A metade da sua idade é: %d", metade);
    }
    return 0;
}