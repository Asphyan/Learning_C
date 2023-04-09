#include <stdio.h>
#include <locale.h>

int main() {
    printf("NOITE OU DIA?\n\n");

    int hora;

    printf("Digite que horas são, no formato 24 horas (números entre 00 e 24): ");
    scanf("%d", &hora);

    if((hora <= 18)&&(hora >=5)){
        printf("ESCURO!");
    }
    return 0;
}