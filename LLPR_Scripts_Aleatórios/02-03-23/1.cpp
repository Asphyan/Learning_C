#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4


int main () {
		
	int linha, coluna;
	float notas [LIN] [COL];
	
	for (linha = 0; linha < LIN; ++linha) {
		for (coluna = 0; coluna < COL; coluna++) {
			printf("Nota do aluno %d na coluna %d: ", linha + 1, coluna + 1);
			scanf("%f", &notas [LIN] [COL]);
		}
		system("cls");
	}
	
	for (linha = 0; linha < LIN; ++linha) {
		printf("Aluno %d -> ", linha + 1);
		for (coluna = 0; coluna < COL; coluna++) {
			printf("%.2f\t\t",notas [LIN] [COL]);
		}
		printf("\n");
	}
	
	return 0;
}
