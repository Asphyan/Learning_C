/*[PONTEIROS/VETOR] Crie uma função que receba um vetor de inteiros e o tamanho
desse vetor, e retorne o maior valor contido no vetor, utilizando ponteiros.*/

int maiorvalor(int *vetor, int tamanho) {
	int maior = *vetor;
	for (int i = 1; i < tamanho; i++) {
		if (*(vetor + i) > maior) {
			maior = *(vetor + i);
		}
	}
	return maior;
}

int main () {
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	printf("Digite os valores do vetor:\n");
	
	for (int i = 0; i < tamanho; i++) {
		scanf("%d", &vetor[i]);
	}
	
	int resultado = maior maiorvalor(vetor, tamanho);
	printf("O maior valor do vetor é: %d\n", resultado);
	
	return 0;
}
