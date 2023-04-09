#include <stdio.h>
#include <locale.h>

	void bubble_sort(int v[], int t) {
		int aux;
		
		for(int i=0; i < t; i++) {
			for(int j = 0; j < t-1; j++) {
				if(v[j] > v[j+1]) {
					aux = v[j];
					v[j]= v[j+1];
					v[j+1] = aux;
				}
			}
		}
	}
	
int main () {
	int v[4] = {5, 8, -5, 13};
	bubble_sort(v, 4);
	for (int i = 0; i < 4; i++) {
		printf("%d ", v[i]);
	}
}
