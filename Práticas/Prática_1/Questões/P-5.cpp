#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int d;
    float troco;

    printf("TROCO\n\n");

    printf("|MÁQUINA DE CAFÉ| 1 Xícara de Café por R$7,00 (Máquina só aceita notas de R$5,00).\n\n");

    printf("Coloque o dinheiro aqui: ");
    scanf("%d", &d);

    troco= d%7;

    printf("\nSeu troco é: %f", troco);

    return 0;
}