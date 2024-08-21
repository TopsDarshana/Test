/*
Develop a C program that finds the transpose of a given matrix.

#include <stdio.h>

int main() {
    int matrix[2][2];
    int r,c;
    
    printf("enter the matrix : \n");
    for(r = 0; r < 2; r++){
        for(c = 0; c < 2; c++){
            scanf("%d", &matrix[r][c]);
        }
    }
    printf("transpose \n");
    for(r = 0; r < 2; r++){
        for(c = 0; c < 2; c++){
    printf("%d", matrix[c][r]);
}
    printf("\n");
    }
}
*/