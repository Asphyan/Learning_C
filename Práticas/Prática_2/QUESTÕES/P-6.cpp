#include <stdio.h>
#include <locale.h>

int main() {
    printf("DESCONTO\n\n");

    int idade1, idade2;

    printf("Idade de pessoa-1: ");
   	scanf("%d", &idade1);
    printf("Idade da pessoa-2: ");
    scanf("%d", &idade2);

   	if (idade1%2 == 0) {
        printf("desconto\n");
   	}  
    return 0;
}