#include <stdio.h>

int main() {
   int A[2][2] = {{2, 3}, {1, 4}};
   int det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

   printf("Determinante de A: %d\n", det);

   return 0;
}

