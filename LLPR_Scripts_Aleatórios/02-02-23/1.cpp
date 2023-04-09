#include <stdio.h>
#define tvetor 5

void preencher_vetor(int v[], int tam);
void mostrar_vetor(int v[], int tam);
void ordenar_vetor(int v[], int tam, int tipo);

int main() {
	int idades[tvetor];
	
	printf("Informe as idades: \n");
	preencher_vetor(idades, tvetor);
	ordenar_vetor(idades, tvetor, -1);
	mostrar_vetor(idades, tvetor);
	
	return 0;
}

void preencher_vetor(int v[], int tam) {
	for(int i = 0; i < tam; i++) {
		printf("Informe o %do. valor: ", i+1);
		scanf("%d", &v[i]);
	}
}

void mostrar_vetor(int v[], int tam) {
	for(int i = 0; i < tam; i++) {
		printf("%d ", v[i]);
	}
}

void ordenar_vetor(int v[], int tam, int tipo) {
	int aux, valor;
	
	for(int i = 0; i < tam; i++) {
		// Salvar valor atual
		valor = i;
		// Comparar com os demais
		for(int j = (i+1); j < tam; j++) {
			if(tipo == -1) {
				if(v[j] > v[valor]) {
					valor = j;
				}
			} else {
				if(v[j] < v[valor]) {
					valor = j;
				}
			}
		}
		// Trocar valores
		if(i != valor) {
			aux = v[valor];
			v[valor] = v[i];
			v[i] = aux;
		}
	}
}
