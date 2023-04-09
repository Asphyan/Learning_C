#include <stdio.h>

void imprimirMatriz(int matriz[2][2]) {
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }
}

int calcularDeterminante(int matriz[2][2]) {
   return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
}

void calcularAdjunta(int matriz[2][2], int adj[2][2]) {
   adj[0][0] = matriz[1][1];
   adj[0][1] = -matriz[0][1];
   adj[1][0] = -matriz[1][0];
   adj[1][1] = matriz[0][0];
}

int main() {
   int A[2][2] = {{1, 2}, {3, 4}};
   int adj[2][2];
   int det = calcularDeterminante(A);
   
   if (det == 0) {
      printf("A matriz A não é invertível.\n");
      return 0;
   }
   
   calcularAdjunta(A, adj);
   
   int Ainv[2][2];
   float invDet = 1.0 / det;
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         Ainv[i][j] = adj[i][j] * invDet;
      }
   }
   
   printf("Matriz inversa de A:\n");
   imprimirMatriz(Ainv);

   return 0;
}

