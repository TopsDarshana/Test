/*
Create a C program that finds the largest and smallest elements in a matrix.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix;
    int rows, cols;
    int i, j;
    int min, max;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");
            
            for (int k = 0; k < i; k++) {
                free(matrix[k]);
            }
            free(matrix);
            return 1;
        }
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    min = max = matrix[0][0];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
*/