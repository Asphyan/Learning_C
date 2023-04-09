#include <stdio.h>

int main() {
    int A[2][2] = {{2, 3}, {1, 4}};
    int C[2][2];
    int fator;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if ((i+j) % 2 == 0) {
                fator = 1;
            } else {
                fator = -1;
            }
            
            C[i][j] = fator * (A[(j+1)%2][(i+1)%2]);

            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

