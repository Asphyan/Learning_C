#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int i, num, vetor[10], buscar_numero;
    int encontrado = 0;

    srand(time(NULL)); //inicializa o gerador de n�meros aleat�rios

    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 100; //sorteia um n�mero entre 0 e 99
    }

    printf("Insira o n�mero a ser buscado: ");
    scanf("%d", &buscar_numero);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == buscar_numero) {
            printf("O n�mero %d foi encontrado no �ndice %d do vetor.\n", buscar_numero, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O n�mero %d n�o foi encontrado no vetor.\n", num_busca);
    }

    return 0;
}

