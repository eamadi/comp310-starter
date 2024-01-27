#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 2

void matrixOperation(int a[ROWS][COLS], int b[ROWS][COLS], int result[ROWS][COLS], char operation) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            switch (operation) {
                case '+':
                    result[i][j] = a[i][j] + b[i][j];
                    break;
                case '*':
                    result[i][j] = 0;
                    for (int k = 0; k < COLS; k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                    break;
                default:
                    
                    printf("Invalid operation.\n");
                    return;
            }
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];

    matrixOperation(matrix1, matrix2, result, '+');
    printf("Matrix Addition:\n");
    printMatrix(result);

    matrixOperation(matrix1, matrix2, result, '*');
    printf("Matrix Multiplication:\n");
    printMatrix(result);

    return 0;
}
