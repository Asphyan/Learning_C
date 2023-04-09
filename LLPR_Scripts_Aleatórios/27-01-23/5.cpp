#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int i, num, vetor[10], buscar_numero;
    int encontrado = 0;

    srand(time(NULL)); //inicializa o gerador de números aleatórios

    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 100; //sorteia um número entre 0 e 99
    }

    printf("Insira o número a ser buscado: ");
    scanf("%d", &buscar_numero);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == buscar_numero) {
            printf("O número %d foi encontrado no índice %d do vetor.\n", buscar_numero, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O número %d não foi encontrado no vetor.\n", num_busca);
    }

    return 0;
}

