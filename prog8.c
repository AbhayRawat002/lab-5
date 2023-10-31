#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int result[][100], int matrix1[][100], int matrix2[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrix(int result[][100], int matrix1[][100], int matrix2[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[100][100], matrix2[100][100], result[100][100];

    printf("For Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    printf("For Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    printf("Matrix 1:\n");
    displayMatrix(matrix1, rows, cols);

    printf("Matrix 2:\n");
    displayMatrix(matrix2, rows, cols);

    addMatrix(result, matrix1, matrix2, rows, cols);
    printf("Result of Matrix Addition:\n");
    displayMatrix(result, rows, cols);

    subtractMatrix(result, matrix1, matrix2, rows, cols);
    printf("Result of Matrix Subtraction:\n");
    displayMatrix(result, rows, cols);

    return 0;
}
