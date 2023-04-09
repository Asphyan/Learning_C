#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("DESENHANDO UM QUADRADO\n\n");

    printf("#########################\n");
    printf("#\t\t\t#");
    printf("\n#\t\t\t#");
    printf("\n#\tBem-Vindo\t#");
    printf("\n#\t\t\t#");
    printf("\n#\t\t\t#");
    printf("\n#########################");

    return 0;
}