#include <stdio.h>

int main() {
    int A[3][3] = {{2, 0, 1}, {3, 4, -2}, {8, 9, 6}};
    int D[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        D[i][i] = A[i][i];
    }

    printf("Matriz diagonal:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

