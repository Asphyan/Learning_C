#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int I[2][2] = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++) {
        I[i][i] = 1;
    }

    printf("Matriz identidade:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", I[i][j]);
        }
        printf("\n");
    }

    return 0;
}

